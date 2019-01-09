/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:26:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 15:31:21 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"
#include <iostream>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);

		void				attack();
		void				setWeapon(Weapon &weapon);
	private:
		Weapon				*_weapon;
		std::string const	_name;
};

#endif
