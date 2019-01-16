/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:05:41 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 11:24:10 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data() {
}

Data::Data(Data const &src) {
    // Copy here
    *this = src;
}

Data::~Data() {

}

Data &	Data::operator=(Data const &rhs)
{
    // Code assignation here
    this->s1 = rhs.s1;
    this->n = rhs.n;
    this->s2 = rhs.s2;
    return *this;
}