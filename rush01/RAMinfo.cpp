/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMinfo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 19:47:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 19:59:10 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RAMinfo.hpp"

RAMinfo::RAMinfo() {
    AMonitorModule<std::string>::_name = "RAMinfo";
}

RAMinfo::~RAMinfo() {
}

std::string  RAMinfo::getData(void) {
    return this->_data;
}

void        RAMinfo::update(void) {
    int				    mib[2];
	unsigned long int	freq;
	size_t			    len;

	std::stringstream result_nb_ram_gb ;

    mib[0] = CTL_HW;
    mib[1] = HW_MEMSIZE;
    len = sizeof(freq);
    sysctl(mib, 2, &freq, &len, NULL, 0);
    result_nb_ram_gb << static_cast<unsigned long int>(freq) / 1000000000 << " Gb Ram";

	this->_data = result_nb_ram_gb.str();
}

RAMinfo    &RAMinfo::operator=(RAMinfo const &rhs)
{
    this->_data = rhs._data;
    return *this;
}