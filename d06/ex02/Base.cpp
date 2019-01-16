/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:31:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:20:26 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base::Base() {

}

Base::Base(Base const &src) {
    // Copy here
    *this = src;
}

Base::~Base() {

}

Base &	Base::operator=(Base const &rhs)
{
    // Code assignation here
    (void)rhs;
    return *this;
}
