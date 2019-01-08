/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:16:29 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 22:20:31 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.h"
#include <iostream>

int		main(void) {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
/*	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}*/
	return 0;
}
