/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:29:29 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/12 15:29:34 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "AGameEntity.hpp"

class Enemy : public AGameEntity{
	public: 
		Enemy();
		Enemy(Enemy const &src); 
		~Enemy(); 

		Enemy	&operator=(Enemy const &rhs);

		virtual void	updateEntity(void);
		void        	shoot(void);
};

#endif
