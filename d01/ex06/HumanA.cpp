/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:38:42 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 22:22:47 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "Weapon.h"
#include <iostream>

HumanA::HumanA(void) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void		HumanA::attack(void) {
	std::cout << this->_name + " attacks with his TYPE ";
	std::cout << this->_weapon.getType() << std::endl;
	return;
}
