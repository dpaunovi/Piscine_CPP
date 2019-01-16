/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:31:23 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:20:29 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C() {

}

C::C(C const &src) {
    // Copy here
    *this = src;
}

C::~C() {

}

C &	C::operator=(C const &rhs)
{
    // Code assignation here
    (void)rhs;
    return *this;
}
