/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:21:14 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 15:43:06 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "ZombieEvent.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent(void) {
	srand(time(NULL));
	return;
}

ZombieEvent::~ZombieEvent(void) {
	return;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie *target = new Zombie(name, this->_type);
	return target;
}

void	ZombieEvent::randomChump(void) {
	std::string name[] = {"Sophie","Sarah","Julie","Bernard", "Bertrand",
						"Louis", "Dragan","Charles", "Greg", "Harry",
						"Peter", "Spider-man", "Ironman", "Jesus", "Ron",
						"Hermione", "Dumbeldore", "Hagrid", "Aragorn", "Legolass"};
	int			random;

	random = rand() % 20;
	Zombie target(name[random], this->_type);
	target.announce();
}
