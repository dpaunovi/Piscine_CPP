/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:15:05 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 16:06:21 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "ZombieEvent.h"
#include <iostream>

int		main(void) {

	ZombieEvent	pool;
	Zombie		*zombie[4];

	std::cout << "--------------- Heap ---------------" << std::endl;
	pool.setZombieType("Vegetarien");
	zombie[0] = pool.newZombie("Gryffondor");
	zombie[1] = pool.newZombie("Serpentard");
	zombie[2] = pool.newZombie("Pouffsouffle");
	zombie[3] = pool.newZombie("Serdaigle");
	for (int i = 0; i < 4; i++) {
		zombie[i]->announce();
	}

	std::cout << "-------------- Stack ---------------" << std::endl;
	pool.setZombieType("Vegan");
	for (int i = 0; i < 4; i++) {
		pool.randomChump();
	}

	for (int i = 0; i < 4; i++) {
		delete zombie[i];
	}

	return 0;
}
