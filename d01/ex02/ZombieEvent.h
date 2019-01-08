/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:18:29 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 15:38:58 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.h"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string);
		Zombie*		newZombie(std::string);
		void		randomChump(void);

	private:
		std::string	_type;
};

#endif
