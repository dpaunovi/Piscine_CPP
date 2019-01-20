/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:21:51 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 22:09:23 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSinfo.hpp"
#include <iostream>
#include <CoreFoundation/CoreFoundation.h>

OSinfo::OSinfo() {
    AMonitorModule<struct Os>::_name = "OSinfo";
}

OSinfo::~OSinfo() {
}

struct Os  OSinfo::getData(void) {
    return this->_data;
}

void        OSinfo::update(void) {
    unsigned buflen = 0;
    char line[256];
    FILE *sw_vers = popen("sw_vers", "r");
    while (fgets(line, sizeof(line), sw_vers) != NULL) {
        int l = snprintf(this->_data.mac + buflen, sizeof(this->_data.mac) - buflen, "%s", line);
        buflen += l;
        assert(buflen < sizeof(this->_data.mac));
    }
    pclose(sw_vers);
    uname(&this->_data.uts);
}

OSinfo    &OSinfo::operator=(OSinfo const &rhs)
{
    this->_data = rhs._data;
    return *this;
}