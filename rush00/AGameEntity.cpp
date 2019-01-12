/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:42 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 23:55:55 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameEntity.hpp"
#include <iostream>

AGameEntity::AGameEntity() : _pos(CVector()), _sprite('>'), _use(1) {
}

AGameEntity::AGameEntity(CVector v, char c) : _pos(v), _sprite(c), _use(1) {
}

AGameEntity::AGameEntity(AGameEntity const &src) {
    // Copy here
    *this = src;
}

AGameEntity::~AGameEntity() {

}

CVector         AGameEntity::getPos(void) const {
    return this->_pos;
}

char            AGameEntity::getSprite(void) const {
    return this->_sprite;
}

bool			AGameEntity::getUse(void) const {return this->_use;}

void			AGameEntity::setUse(bool b) {this->_use = b;}

void            AGameEntity::moveUp(void) {
    if (this->_pos.x <= 1)
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.x -= 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}

void            AGameEntity::moveDown(void) {
    if (this->_pos.x >= WIN_X - 2)
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.x += 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}

void            AGameEntity::moveRight(void) {
    if (this->_pos.y >= WIN_Y - 2)
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.y += 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}

void            AGameEntity::moveLeft(void) {
    if (this->_pos.y <= 1)
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.y -= 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}

void  AGameEntity::updateEntity(int input) {
    input = 0;
}

AGameEntity &	AGameEntity::operator=(AGameEntity const &rhs)
{
    // Code assignation here
    this->_pos = rhs.getPos();
    this->_sprite = rhs.getSprite();
    return *this;
}

AGameEntity     ***AGameEntity::init(void) {
    AGameEntity ***map = new AGameEntity**[WIN_X];

    for (int i = 0; i < WIN_X; i++) {
        map[i] = new AGameEntity*[WIN_Y];
        for (int j = 0; j < WIN_Y; j++) {
            map[i][j] = NULL;
        }
    }
    return map;
}

AGameEntity     ***AGameEntity::entityMap = AGameEntity::init();