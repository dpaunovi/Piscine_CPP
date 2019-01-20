/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUinfo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 19:47:50 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 20:42:17 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUinfo.hpp"

CPUinfo::CPUinfo() {
    AMonitorModule<CPU>::_name = "CPUinfo";
	this->_count = HOST_CPU_LOAD_INFO_COUNT;
	this->_data.userTicks = 0;
	this->_data.cpuTicks = 0;
	this->_data.idleTicks = 0;
	this->_data.prevCpuTicks = 0;
	this->_data.prevIdleTicks = 0;
	this->_data.prevUserTicks = 0;
}

CPUinfo::~CPUinfo() {
}

CPU  CPUinfo::getData(void) {
    return this->_data;
}

void        CPUinfo::update(void) {
    
    int				mib[2];
	unsigned int	freq;
	size_t			len;

	char            name[126];
	std::stringstream result_nb_ghz;
	std::stringstream result_nb_cores;
	std::stringstream result_nb_cpu_ok;

	//Name CPU
	mib[0] = CTL_HW;
	mib[1] = HW_MODEL;
	len = 126;
	sysctlbyname("machdep.cpu.brand_string", &name, &len, NULL, 0);
	this->_data.name = std::string(name).substr(0, 26);

	//Number of GHz
	mib[0] = CTL_HW;
	mib[1] = HW_CPU_FREQ;
	len = sizeof(freq);
	sysctl(mib, 2, &freq, &len, NULL, 0);
	result_nb_ghz << static_cast<float>(freq) / 1000000000 << " GHz";
	this->_data.ghz = result_nb_ghz.str();

	//Number of Cores
	mib[0] = CTL_HW;
	mib[1] = HW_NCPU;
	len = sizeof(freq);
	sysctl(mib, 2, &freq, &len, NULL, 0);
	result_nb_cores << static_cast<int>(freq) << " Cores";
	this->_data.core = result_nb_cores.str();

	//Number of CPU available
	mib[0] = CTL_HW;
	mib[1] = HW_AVAILCPU;
	len = sizeof(freq);
	sysctl(mib, 2, &freq, &len, NULL, 0);
	result_nb_cpu_ok << static_cast<int>(freq) << " Cores";
	this->_data.availcore = result_nb_cpu_ok.str();

 	if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO, reinterpret_cast<host_info_t>(&this->_cpuinfo), &this->_count) == KERN_SUCCESS)
    {
        this->_data.userTicks = (this->_cpuinfo.cpu_ticks[0] - this->_data.prevUserTicks);
        this->_data.cpuTicks = (this->_cpuinfo.cpu_ticks[1] - this->_data.prevCpuTicks);
        this->_data.idleTicks = (this->_cpuinfo.cpu_ticks[2] - this->_data.prevIdleTicks);
        this->_data.prevUserTicks = this->_cpuinfo.cpu_ticks[0];
        this->_data.prevCpuTicks = this->_cpuinfo.cpu_ticks[1];
        this->_data.prevIdleTicks = this->_cpuinfo.cpu_ticks[2];
    }
}



CPUinfo    &CPUinfo::operator=(CPUinfo const &rhs)
{
    this->_data = rhs._data;
    return *this;
}