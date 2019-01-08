/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:50:20 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 19:07:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.h"
#include "Zombie.h"
#include <iostream>

ZombieHorde::ZombieHorde(int N) : _group(new Zombie[N]), _total(N) {
	std::cout << "An horde with " << N << " zombies was created !" << std::endl;
	return;
}

ZombieHorde::~ZombieHorde(void) {
	delete[] this->_group;
	std::cout << "The horde with " << this->_total << " zombies was disolved !" << std::endl;
	return;
}

void	ZombieHorde::generalAnnounce(void) {
	for (int i = 0; i < this->_total; i++) {
		this->_group[i].announce();
	}
	return;
}
