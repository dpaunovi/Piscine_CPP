/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 02:29:03 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 15:20:28 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"
#include "Enemy.hpp"
#include "ft_retro.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(CVector v, char c) : AGameEntity(v,c,TENEMY), _speed(1), _moveSpeed(10), _lastAction(0), _lastMove(0){
}

Enemy::Enemy(Enemy const &src){
	*this = src;
}

Enemy::~Enemy(){
}

Enemy		& Enemy::operator=(Enemy const &rhs){
	AGameEntity::operator=(rhs);
	return (*this);
}

// bool	Enemy::isAvailable(void) const{
// 	if ((double(clock() - this->_lastAction) / (CLOCKS_PER_SEC / this->_speed)) > 1)
// 		return (true);
// 	else
// 		return(false);
// }

void	Enemy::updateEntity(int input){
	if (this->isOutOfBound()){
		this->deleteEntity(*this);
		return ;
	}
	if (isAvailable(this->_lastMove, this->_moveSpeed)) {
		this->_lastMove = clock();
		this->moveRand();
	}
	if (isAvailable(this->_lastAction, this->_speed)) {
		input = 0;
		this->_lastAction = clock();
		this->shoot();
	}
}

void	Enemy::shoot(void){
	AGameEntity		*missile = new Missile(CVector(this->_pos.x, this->_pos.y - 1), TEMISSILE_SPRITE, TEMISSILE, false);
	AGameEntity::addEntity(*missile);
}
