/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hostname.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:33:05 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 13:08:04 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hostname.hpp"
#include <unistd.h>
#include <iostream>

Hostname::Hostname() {
    AMonitorModule<std::string>::_name = "Hostname";
}

Hostname::~Hostname() {
}

std::string Hostname::getData(void) {
    return this->_data;
}

void        Hostname::update(void) {
    char hostname[256];

    gethostname(hostname, 256);
    this->_data = static_cast<std::string>(hostname);
}

Hostname    &Hostname::operator=(Hostname const &rhs)
{
    this->_data = rhs._data;
    return *this;
}