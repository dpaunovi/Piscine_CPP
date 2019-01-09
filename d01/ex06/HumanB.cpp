/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:38:42 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 15:31:32 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include "Weapon.h"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "New HumanB has been created with name: " + name << std::endl;
	return;
}

HumanB::~HumanB(void) {
	std::cout << this->_name + " has been destroyed." << std::endl;
	return;
}

void		HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return;
}

void		HumanB::attack(void) {
	std::cout << this->_name + " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
	return;
}
