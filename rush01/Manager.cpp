/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 14:09:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 14:10:58 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"
#include <iostream>

Manager::Manager(void) {}

Manager::Manager(Manager const &src) {*this = src;}

Manager::~Manager(void) {}

Manager     &Manager::operator=(Manager const &rhs)
{
    // Code assignation here
    return *this;
}
