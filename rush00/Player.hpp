/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:29:43 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/13 16:50:51 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "CVector.hpp"
#include "AGameEntity.hpp"

class Player : public AGameEntity {
	public: 
		Player(void);
		Player(CVector v, char c);
		Player(Player const &src); 
		virtual ~Player(void); 

		Player	&operator=(Player const &rhs);

		virtual void	updateEntity(int input);
		void	        shoot(void);
};

#endif
