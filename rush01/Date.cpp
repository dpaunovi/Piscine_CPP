/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 22:17:27 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 13:09:17 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"
#include <unistd.h>
#include <iostream>

Date::Date() {
    AMonitorModule<time_t>::_name = "Date";
}

Date::~Date() {
}

time_t  Date::getData(void) {
    return this->_data;
}

void        Date::update(void) {
    time_t      my_time = time(NULL);
    this->_data = my_time;
}

Date    &Date::operator=(Date const &rhs)
{
    this->_data = rhs._data;
    return *this;
}
