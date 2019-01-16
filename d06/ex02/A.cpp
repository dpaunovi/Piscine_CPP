/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:30:04 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:20:20 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A() {

}

A::A(A const &src) {
    // Copy here
    *this = src;
}

A::~A() {

}

A &A::operator=(A const &rhs)
{
    // Code assignation here
    (void)rhs;
    return *this;
}
