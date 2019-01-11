/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 15:26:44 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>

class ScavTrap {

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap			&operator=(ScavTrap const &rhs);

		void				init(std::string name);
		std::string			getName(void) const;
		int					rangedAttack(std::string const &target);
		int					meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				challengeNewcomer(std::string const &target);

		void				displayAtk(std::string const atkName, int const dmg, std::string const target);

	private:
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
