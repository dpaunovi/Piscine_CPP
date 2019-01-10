/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 18:14:21 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/10 18:28:58 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.h"

int		main(void) {
	FragTrap	p1("Greg");
	FragTrap	p2("Florian");

	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));
	p2.takeDamage(p1.rangedAttack(p2.getName()));

	return 0;
}
