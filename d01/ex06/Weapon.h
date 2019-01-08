/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:03:51 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 22:18:29 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&get_type(void);
		void				set_type(std::string type);
	private:
		std::string			_type;
};

#endif
