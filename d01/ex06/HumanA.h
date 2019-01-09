/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:26:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 17:20:46 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"
#include <iostream>

class HumanA {
	public:
		HumanA(std::string const name, Weapon &weapon);
		~HumanA(void);

		void				attack();
	private:
		std::string const	_name;
		Weapon				*_weapon;
};

#endif
