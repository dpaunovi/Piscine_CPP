/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 18:14:21 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 12:43:33 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.h"

int		main(void) {
	FragTrap	p1("Greg");
	FragTrap	p2("Florian");
	srand(time(NULL));

	std::cout << "=============== ranged attack ===============" << std::endl;
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	std::cout << std::endl;
	p1.takeDamage(p2.rangedAttack(p1.getName()));
	std::cout << std::endl;

	std::cout << "=============== melee attack ===============" << std::endl;
	p2.takeDamage(p1.meleeAttack(p2.getName()));
	std::cout << std::endl;
	p1.takeDamage(p2.meleeAttack(p1.getName()));
	std::cout << std::endl;

	std::cout << "=============== repaired robots ===============" << std::endl;
	p1.beRepaired(70);
	std::cout << std::endl;
	p2.beRepaired(1);
	std::cout << std::endl;

	std::cout << "=============== random attack ===============" << std::endl;
	p2.takeDamage(p1.vaulthunter_dot_exe(p2.getName()));
	std::cout << std::endl;
	p2.takeDamage(p1.vaulthunter_dot_exe(p2.getName()));
	std::cout << std::endl;
	p2.takeDamage(p1.vaulthunter_dot_exe(p2.getName()));
	std::cout << std::endl;
	p2.takeDamage(p1.vaulthunter_dot_exe(p2.getName()));
	std::cout << std::endl;
	p2.takeDamage(p1.vaulthunter_dot_exe(p2.getName()));
	std::cout << std::endl;

	std::cout << "=============== End of battle ===============" << std::endl;

	return 0;
}
