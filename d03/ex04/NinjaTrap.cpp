/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 18:34:47 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.h"
#include <iostream>
#include <cstdlib>

NinjaTrap::NinjaTrap(void) {
	this->init();

	std::cout << "[" << ClapTrap::_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) {
	ClapTrap::_name = name;
	this->init();

	std::cout << "[" << ClapTrap::_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been cloned" << std::endl;

	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been destroyed" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_max_hp = rhs._max_hp;
		this->_ep = rhs._ep;
		this->_max_ep = rhs._max_ep;
		this->_level = rhs._level;
		this->_melee_atk_dmg = rhs._melee_atk_dmg;
		this->_ranged_atk_dmg = rhs._ranged_atk_dmg;
		this->_armor_reduc_dmg = rhs._armor_reduc_dmg;
	}
	return *this;
}

void		NinjaTrap::init(void) {
	ClapTrap::_class = "NNJA-TP";
	ClapTrap::_hp = 60;
	ClapTrap::_max_hp = 60;
	ClapTrap::_ep = 120;
	ClapTrap::_max_ep = 120;
	ClapTrap::_level = 1;
	ClapTrap::_melee_atk_dmg = 60;
	ClapTrap::_ranged_atk_dmg = 5;
	ClapTrap::_armor_reduc_dmg = 0;

	return ;
}

void		NinjaTrap::ninjaShoebox(std::string const &target) {
	std::cout << this->_class << " " << this->_name << " flicked "
		<< target << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(ClapTrap const &target) {
	this->ninjaShoebox(target.getName());
}

void		NinjaTrap::ninjaShoebox(FragTrap const &target) {
	this->ninjaShoebox(target.getName());
}

void		NinjaTrap::ninjaShoebox(ScavTrap const &target) {
	this->ninjaShoebox(target.getName());
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
	this->ninjaShoebox(target.getName());
}
