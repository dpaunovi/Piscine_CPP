/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:26:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 21:45:54 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"
#include <iostream>

class HumanA {
	public:
		HumanA(void);
		~HumanA(void);

		void				attack();
	private:
		Weapon				_weapon;
		std::string const	_name;
};

#endif
