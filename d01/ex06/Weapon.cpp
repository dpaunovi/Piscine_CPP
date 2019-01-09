/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:07:35 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 14:52:25 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "New weapon has created." << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon has destroyed." << std::endl;
	return;
}

std::string const	&Weapon::getType(void) {
	std::string const &ref = this->_type;
	return ref;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
	return;
}
