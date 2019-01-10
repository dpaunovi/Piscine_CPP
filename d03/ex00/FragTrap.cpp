/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/10 18:26:33 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << "[FR4G-TP] - " << this->_name << " has been created" << std::endl;
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

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	std::cout << "[FR4G-TP] - " << this->_name << " has been cloned" << std::endl;

	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "[FR4G-TP] - " << this->_name << " has been destroyed" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
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

std::string	FragTrap::getName(void) const {
	return this->_name;
}

int			FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_atk_dmg << " points of damage !";
	std::cout << std::endl;

	return this->_ranged_atk_dmg;
}

int			FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_melee_atk_dmg << " points of damage !";
	std::cout << std::endl;

	return this->_melee_atk_dmg;
}

void		FragTrap::takeDamage(unsigned int amount) {
	amount -= this->_armor_reduc_dmg;
	if (amount > 0) {
		if (amount > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= amount;
		}
		std::cout << "FR4G-TP " << this->_name << " lost " << amount;
		std::cout << "HP. He have " << this->_hp << "HP left";
		std::cout << std::endl;
	} else {
		std::cout << "FR4G-TP " << this->_name << "'s armor absorbed";
		std::cout << " all of the damage!" << std::endl;
	}

	return;
}

void		FragTrap::beRepaired(unsigned int amount) {
	if ((amount + this->_hp) > this->_max_hp) {
		this->_hp = 100;
	} else {
		this->_hp += amount;
	}

	std::cout << "FR4G-TP " << this->_name << " gained " << amount;
	std::cout << "HP. He have " << this->_hp << "HP now";
	std::cout << std::endl;
	return;
}
