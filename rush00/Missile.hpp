/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:13:01 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 15:25:32 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_HPP
#define MISSILE_HPP

#include "AGameEntity.hpp"

class Missile : public AGameEntity{
    public: 
        Missile();
        Missile(Missile const &src); 
        ~Missile(); 

        Missile	&operator=(Missile const &rhs);

		virtual void	updateEntity(void);
    private:
};

#endif
