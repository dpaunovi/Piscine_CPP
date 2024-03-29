/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obstacle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:13:06 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 11:54:25 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "AGameEntity.hpp"

class Obstacle : public AGameEntity{
    public: 
        Obstacle();
        Obstacle(CVector v, char c);
        Obstacle(Obstacle const &src); 
        virtual ~Obstacle(); 

        Obstacle	&operator=(Obstacle const &rhs);

		virtual void	updateEntity(int input);
    private:
};

#endif
