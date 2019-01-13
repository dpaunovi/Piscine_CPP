/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 17:48:43 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap			&operator=(ClapTrap const &rhs);

		void				init(std::string name);
		std::string			getName(void) const;
		int					rangedAttack(std::string const &target);
		int					meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		void				displayAtk(std::string const atkName, int const dmg, std::string const target);

	protected:
		std::string	_name;
		std::string	_class;
		int			_hp;
		int			_max_hp;
		int			_ep;
		int			_max_ep;
		int			_level;
		int			_melee_atk_dmg;
		int			_ranged_atk_dmg;
		int			_armor_reduc_dmg;
};

#endif
