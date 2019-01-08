/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:07:35 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 22:19:01 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string type) : this->_type(type) {
	std::cout << "New weapon has created." << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon has destroyed." << std::endl;
	return;
}

std::string const	&Weapon::get_type(void) {
	std::string const &ref = this->_type;
	return ref;
}

void				Weapon::set_type(std::string type) {
	this->_type = type;
	return;
}
