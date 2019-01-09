/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:03:51 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 15:01:14 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);
	private:
		std::string			_type;
};

#endif
