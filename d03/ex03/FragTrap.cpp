/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 17:58:55 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(void) {
	this->init();

	std::cout << "[" << ClapTrap::_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) {
	ClapTrap::_name = name;
	this->init();

	std::cout << "[" << ClapTrap::_class << "] - " << this->_name;
	std::cout << " has been created" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been cloned" << std::endl;

	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "[" << this->_class << "] - " << this->_name;
	std::cout << " has been destroyed" << std::endl;
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

void		FragTrap::init(void) {
	ClapTrap::_class = "FR4G-TP";
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

int			FragTrap::vaulthunter_dot_exe(std::string const &target) {
	unsigned int	damage[] = {100, 10, 45, 37, 6};
	std::string		atk[] = {"chicken", "melon", "cat", "unicorn", "toilet paper"};
	int				i = rand() % 5;

	if (this->_ep < 25) {
		std::cout << this->_class << " " << this->_name << " try to attacks " << target;
		std::cout << " with a " << atk[i] << " but, he don't have enough energy points ";
		std::cout << std::endl;
		return (0);
	} else {
		this->_ep -= 25;
		this->displayAtk(atk[i], damage[i], target);
		return damage[i];
	}
}
