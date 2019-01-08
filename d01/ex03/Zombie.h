/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:57:25 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 18:39:42 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void				announce(void);

	private:
		static std::string	_dialogue;
		static std::string	_names[];
		std::string			_name;
		std::string			_type;
};

#endif
