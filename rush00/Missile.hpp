/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:13:01 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 11:48:33 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_HPP
#define MISSILE_HPP

#include "AGameEntity.hpp"
#include <ctime>

class Missile : public AGameEntity{
    public: 
        Missile();
		Missile(CVector v, char c, int type, bool b);
        Missile(Missile const &src); 
        virtual ~Missile(); 

        Missile	&operator=(Missile const &rhs);

		bool			getIsPlayer(void) const;
		bool			isAvailable(void) const;

		virtual void	updateEntity(int input);
    private:
		bool			_isPlayer;
		int				_speed;
		clock_t			_lastAction;
};

#endif
