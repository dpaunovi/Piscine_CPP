/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 01:02:58 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 11:49:52 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"
#include <iostream>

Missile::Missile() {
}

Missile::Missile(CVector v, char c, int type, bool b) : AGameEntity(v,c,type), _isPlayer(b), _speed(60), _lastAction(0){
}

Missile::Missile(Missile const &src){
	*this = src;
}

Missile::~Missile(){
}

Missile		& Missile::operator=(Missile const &rhs){
	AGameEntity::operator=(rhs);
	return (*this);
}

bool	Missile::getIsPlayer(void) const{return this->_isPlayer;}
bool	Missile::isAvailable(void) const{
	if ((double(clock() - this->_lastAction) / (CLOCKS_PER_SEC / this->_speed)) > 1)
		return (true);
	else
		return(false);
}

void	Missile::updateEntity(int input){
	if (this->isOutOfBound()){
		this->deleteEntity(*this);
		return ;
	}
	if (!this->isAvailable())
		return ;

	input = 0;
	this->_lastAction = clock();
	if (this->_isPlayer)
		this->moveRight();
	else if (!this->_isPlayer)
		this->moveLeft();
}
