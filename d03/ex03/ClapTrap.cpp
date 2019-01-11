/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 17:54:35 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap(void) {
	this->init("unknown");
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string name) {
	this->init(name);
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;

	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been cloned" << std::endl;

	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been destroyed" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_class = rhs._class;
		this->_hp = rhs._hp;
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

void		ClapTrap::init(std::string name) {
	this->_name = name;
	this->_class = "CL4P-TP";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_atk_dmg = 30;
	this->_ranged_atk_dmg = 20;
	this->_armor_reduc_dmg = 5;

	return;
}

std::string	ClapTrap::getName(void) const {
	return this->_name;
}

void		ClapTrap::displayAtk(std::string const atkName, int const dmg, std::string const target) {
	std::cout << this->_class << " " << this->_name << " attacks " << target;
	std::cout << " with " << atkName << ", causing " << dmg << " points of damage !";
	std::cout << std::endl;

	return ;
}

int			ClapTrap::rangedAttack(std::string const &target) {
	this->displayAtk("range", this->_ranged_atk_dmg, target);

	return this->_ranged_atk_dmg;
}

int			ClapTrap::meleeAttack(std::string const &target) {
	this->displayAtk("melee", this->_melee_atk_dmg, target);

	return this->_melee_atk_dmg;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	int	dmg = amount - this->_armor_reduc_dmg;
	if (dmg > 0) {
		if (dmg > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= dmg;
		}
		std::cout << this->_class << " " << this->_name << " reduc " << this->_armor_reduc_dmg;
		std::cout << " with this armor !" << std::endl;
		std::cout << this->_class << " " << this->_name << " lost " << dmg;
		std::cout << "HP. He have " << this->_hp << "HP left";
		std::cout << std::endl;
	} else if (amount > 0) {
		std::cout << this->_class << " " << this->_name << "'s armor absorbed";
		std::cout << " all of the damage!" << std::endl;
	}

	return;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if ((amount + (unsigned int)this->_hp) > (unsigned int)this->_max_hp) {
		this->_hp = 100;
	} else {
		this->_hp += amount;
	}

	std::cout << this->_class << " " << this->_name << " gained " << amount;
	std::cout << "HP. He have " << this->_hp << "HP now";
	std::cout << std::endl;
	return;
}
