/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:04:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/11 18:35:27 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"
#include <iostream>

class NinjaTrap : public ClapTrap {

	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);

		NinjaTrap			&operator=(NinjaTrap const &rhs);

		void				init(void);
		void				ninjaShoebox(std::string const &target);
		void				ninjaShoebox(ClapTrap const &target);
		void				ninjaShoebox(FragTrap const &target);
		void				ninjaShoebox(ScavTrap const &target);
		void				ninjaShoebox(NinjaTrap const &target);
};

#endif
