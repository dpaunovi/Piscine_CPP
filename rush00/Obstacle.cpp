/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obstacle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 11:06:16 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 11:54:27 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Obstacle.hpp"
#include <iostream>

Obstacle::Obstacle() {
}

Obstacle::Obstacle(CVector v, char c) : AGameEntity(v,c,TOBST){
}

Obstacle::Obstacle(Obstacle const &src){
	*this = src;
}

Obstacle::~Obstacle(){
}

Obstacle		& Obstacle::operator=(Obstacle const &rhs){
	AGameEntity::operator=(rhs);
	return (*this);
}


void	Obstacle::updateEntity(int input){
	if (this->isOutOfBound()){
		this->deleteEntity(*this);
		return ;
	}
	input = 0;
}
