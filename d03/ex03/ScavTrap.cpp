/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 17:54:03 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(void) {
	this->init();

	std::cout << "[" << ClapTrap::_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) {
	ClapTrap::_name = name;
	this->init();

	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been cloned" << std::endl;

	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been destroyed" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
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

void		ScavTrap::init(void) {
	ClapTrap::_class = "SC4V-TP";
	ClapTrap::_hp = 100;
	ClapTrap::_max_hp = 100;
	ClapTrap::_ep = 50;
	ClapTrap::_max_ep = 50;
	ClapTrap::_level = 1;
	ClapTrap::_melee_atk_dmg = 20;
	ClapTrap::_ranged_atk_dmg = 15;
	ClapTrap::_armor_reduc_dmg = 3;

	return ;
}

void		ScavTrap::challengeNewcomer(std::string const &target) {
	std::string		challenge[] = {
		"hold his nose under his leg for 30 sec",
		"perform 100 burpees",
		"finished one Murph training",
		"win at the game rock-paper-scissors"};
	int				i = rand() % 4;

	std::cout << this->_class << " " << this->_name << " throws a new challenge." << std::endl;
	std::cout << target << " must " << challenge[i];
	std::cout << std::endl;
	return;
}
