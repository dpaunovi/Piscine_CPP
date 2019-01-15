/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:48:23 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/15 15:50:42 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>

Conversion::Conversion() {

}

Conversion::Conversion(Conversion const &src) {
    // Copy here
    *this = src;
}

Conversion::~Conversion() {

}

Conversion &	Conversion::operator=(Conversion const &rhs)
{
    // Code assignation here
    return *this;
}
