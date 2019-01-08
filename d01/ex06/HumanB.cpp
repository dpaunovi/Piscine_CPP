/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:38:42 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 22:21:05 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include "Weapon.h"
#include <iostream>

HumanB::HumanB(void) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void		HumanB::attack(void) {
	std::cout << this->_name + " attacks with his TYPE ";
	std::cout << this->_weapon->getType() << std::endl;
	return;
}
