/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:29:29 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/13 13:47:37 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "AGameEntity.hpp"
#include <ctime>

class Enemy : public AGameEntity{
	public: 
		Enemy();
		Enemy(CVector vm, char c);
		Enemy(Enemy const &src); 
		virtual ~Enemy(); 

		Enemy	&operator=(Enemy const &rhs);

		virtual void	updateEntity(int input);
		void			shoot(void);
	private:
		int				_speed;
		int				_moveSpeed;
		clock_t			_lastAction;
		clock_t			_lastMove;
};

#endif
