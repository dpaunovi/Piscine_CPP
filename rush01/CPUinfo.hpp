/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUinfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 19:47:43 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 21:11:49 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUINFO_HPP
#define CPUINFO_HPP

#include "AMonitorModule.hpp"
#include <iostream>
#include <sys/utsname.h>

#include <sys/types.h>
#include <sys/sysctl.h>
#include <stdio.h>
#include <mach/mach_host.h>
#include <mach/processor_info.h>
#include <fstream>
#include <sstream>
#include <sys/socket.h>

struct  CPU {
    std::string     name;
    std::string     ghz;
    std::string     core;
    std::string     availcore;
    unsigned long   userTicks;
    unsigned long   cpuTicks;
    unsigned long   idleTicks;
    unsigned long   prevUserTicks;
    unsigned long   prevCpuTicks;
    unsigned long   prevIdleTicks;
};

class CPUinfo : public AMonitorModule<CPU> {
    public:
        CPUinfo();
        ~CPUinfo();

        void            update(void);
        CPU             getData(void);

        CPUinfo	&operator=(CPUinfo const &rhs);

    private:
        CPU                         _data;
        mach_msg_type_number_t      _count;
        host_cpu_load_info_data_t   _cpuinfo;
        CPUinfo(CPUinfo const &src);
};

#endif
