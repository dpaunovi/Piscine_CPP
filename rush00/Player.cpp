/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:52 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 18:18:51 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Missile.hpp"
#include <iostream>

Player::Player() {
}

Player::Player(CVector v, char c) : AGameEntity(v,c,TPLAYER) {
	this->_hp = 3;
	this->_score = 0;
}

Player::Player(Player const &src) {
	// Copy here
	*this = src;
}

Player::~Player() {

}

Player &	Player::operator=(Player const &rhs)
{
	// Code assignation here
	AGameEntity::operator=(rhs);
	return *this;
}

void            Player::updateEntity(int input) {
	if (input == 119 || input == KEY_UP) {
		this->moveUp();
	} else if (input == 115 || input == KEY_DOWN) {
		this->moveDown();
	} else if (input == 97 || input == KEY_LEFT) {
		this->moveLeft();
	} else if (input == 100 || input == KEY_RIGHT) {
		if (this->_pos.y < WIN_Y - 8)
			this->moveRight();
	} else if (input == 32) {
		this->shoot();
	}
}

void		Player::shoot(void){
	AGameEntity		*missile = new Missile(CVector(this->_pos.x, this->_pos.y + 1), TPMISSILE_SPRITE, TPMISSILE, true);
	AGameEntity::addEntity(*missile);
}
