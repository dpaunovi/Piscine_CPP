/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:31:07 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:20:23 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream>

B::B() {

}

B::B(B const &src) {
    // Copy here
    *this = src;
}

B::~B() {

}

B &	B::operator=(B const &rhs)
{
    // Code assignation here
    (void)rhs;
    return *this;
}
