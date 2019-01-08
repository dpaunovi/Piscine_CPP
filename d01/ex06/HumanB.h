/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:26:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 21:49:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"
#include <iostream>

class HumanB {
	public:
		HumanB(void);
		~HumanB(void);

		void				attack();
	private:
		Weapon				_weapon;
		std::string const	_name;
};

#endif
