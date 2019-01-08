/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:07:52 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 19:16:11 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "ZombieHorde.h"
#include <iostream>

void	test_horde(void) {
	std::cout << "-- Creating horde --" << std::endl;
	ZombieHorde horde(21);
	std::cout << "-- Horde speaks --" << std::endl;
	horde.generalAnnounce();
	std::cout << "-- Horde is silent --" << std::endl;
}

int		main(void) {
	srand(time(NULL));
	test_horde();
	std::cout << "-- End of test function --" << std::endl;

	return 0;
}
