/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:52 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 23:49:14 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include <iostream>

Player::Player() {
}

Player::Player(CVector v, char c) : AGameEntity(v,c) {
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
    if (input == 119) {
        this->moveUp();
    } else if (input == 115) {
        this->moveDown();
    } else if (input == 97) {
        this->moveLeft();
    } else if (input == 100) {
        this->moveRight();
    }
}