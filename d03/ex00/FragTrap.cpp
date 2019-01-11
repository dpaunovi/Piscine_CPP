/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 14:40:24 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include <iostream>
#include <cstdlib>

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
	std::cout << " at melee, causing " << this->_melee_atk_dmg << " points of damage !";
	std::cout << std::endl;

	return this->_melee_atk_dmg;
}

int			FragTrap::vaulthunter_dot_exe(std::string const &target) {
	unsigned int	damage[] = {100, 10, 45, 37, 6};
	std::string		atk[] = {"chicken", "melon", "cat", "unicorn", "toilet paper"};
	int				i = rand() % 5;

	if (this->_ep < 25) {
		std::cout << "FR4G-TP " << this->_name << " try to attacks " << target;
		std::cout << " with a " << atk[i] << " but, he don't have enough energy points ";
		std::cout << std::endl;
		return (0);
	} else {
		this->_ep -= 25;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " with a " << atk[i] << ", causing " << damage[i];
		std::cout << " points of damage !" << std::endl;
		return damage[i];
	}
}

void		FragTrap::takeDamage(unsigned int amount) {
	int	dmg = amount - this->_armor_reduc_dmg;
	if (dmg > 0) {
		if (dmg > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= dmg;
		}
		std::cout << "FR4G-TP " << this->_name << " reduc " << this->_armor_reduc_dmg;
		std::cout << " with this armor !" << std::endl;
		std::cout << "FR4G-TP " << this->_name << " lost " << dmg;
		std::cout << "HP. He have " << this->_hp << "HP left";
		std::cout << std::endl;
	} else if (amount > 0) {
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
