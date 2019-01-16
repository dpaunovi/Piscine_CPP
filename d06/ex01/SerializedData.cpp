/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializedData.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:05:41 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:17:26 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SerializedData.hpp"
#include <iostream>

SerializedData::SerializedData() {
}

SerializedData::SerializedData(SerializedData const &src) {
    // Copy here
    *this = src;
}

SerializedData::~SerializedData() {

}

SerializedData &	SerializedData::operator=(SerializedData const &rhs)
{
    // Code assignation here
    (void)rhs;
    return *this;
}