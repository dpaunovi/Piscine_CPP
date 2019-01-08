/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:46:49 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 19:00:56 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.h"
#include <iostream>

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	generalAnnounce(void);

	private:
		Zombie *_group;
		int		_total;
};

#endif
