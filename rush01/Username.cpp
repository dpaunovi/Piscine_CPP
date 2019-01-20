/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Username.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 12:49:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 13:08:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Username.hpp"
#include <unistd.h>
#include <iostream>

Username::Username() {
    AMonitorModule<std::string>::_name = "Username";
}

Username::~Username() {
}

std::string Username::getData(void) {
    return this->_data;
}

void        Username::update(void) {
    char username[256];

    getlogin_r(username, 256);
    this->_data = static_cast<std::string>(username);
}

Username    &Username::operator=(Username const &rhs)
{
    this->_data = rhs._data;
    return *this;
}