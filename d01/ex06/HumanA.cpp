/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:38:42 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 15:25:37 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "Weapon.h"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {
	std::cout << "New HumanA has been created with name: " + name << std::endl;
	return;
}

HumanA::~HumanA(void) {
	std::cout << this->_name + " has been destroyed." << std::endl;
	return;
}

void		HumanA::attack(void) {
		std::cout << this->_name + " attacks with his ";
		std::cout << this->_weapon->getType() << std::endl;
	return;
}
