/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:07:38 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 16:08:59 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << this->_name + " has been created." << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << this->_name + " is dead !" << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << '<' + this->_name + " (" + this->_type + ')' + "> " +
		this->_dialogue << std::endl;
	return;
}

std::string	Zombie::_dialogue = "Braiiiiiiinnnssss...";
