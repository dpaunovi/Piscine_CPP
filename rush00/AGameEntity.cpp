/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:42 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 19:04:11 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameEntity.hpp"
#include <iostream>

AGameEntity::AGameEntity() : _pos(CVector()), _sprite('>'), _use(1) {
}

AGameEntity::AGameEntity(CVector v, char c, int type) : _pos(v), _sprite(c), _use(1), _type(type){
}

AGameEntity::AGameEntity(AGameEntity const &src) {
    // Copy here
    *this = src;
}

AGameEntity::~AGameEntity() {

}

CVector         AGameEntity::getPos(void) const {return this->_pos;}
char            AGameEntity::getSprite(void) const {return this->_sprite;}
bool			AGameEntity::getUse(void) const {return this->_use;}
int             AGameEntity::getType(void) const {return this->_type;}
int				AGameEntity::getHp(void) const{return this->_hp;}
int				AGameEntity::getScore(void) const{return this->_score;}

void			AGameEntity::setUse(bool b) {this->_use = b;}

void            AGameEntity::moveRand(void) {
    int     random = rand() % 5;
    if (random == 0)
        this->moveDown();
    else if (random == 1)
        this->moveUp();
    else if (random == 2)
        this->moveLeft();
    else if (random == 3)
        this->moveRight();

}

void            AGameEntity::moveUp(void) {
    if (this->_pos.x <= 1 || this->handleCollision(CVector(this->_pos.x - 1, this->_pos.y)))
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.x -= 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}
void            AGameEntity::moveDown(void) {
    if (this->_pos.x >= WIN_X - 2 || this->handleCollision(CVector(this->_pos.x + 1, this->_pos.y)))
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.x += 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}
void            AGameEntity::moveRight(void) {
    if (this->_pos.y >= WIN_Y - 2 || this->handleCollision(CVector(this->_pos.x, this->_pos.y + 1)))
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.y += 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}
void            AGameEntity::moveLeft(void) {
    if (this->_pos.y <= 1 || this->handleCollision(CVector(this->_pos.x, this->_pos.y - 1)))
        return;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = NULL;
    this->_pos.y -= 1;
    AGameEntity::entityMap[this->_pos.x][this->_pos.y] = this;
}

void 			AGameEntity::updateEntity(int input) {
    input = 0;
}

void			AGameEntity::deleteEntity(AGameEntity &target) {
	if (AGameEntity::entityMap[target.getPos().x][target.getPos().y] != NULL)
		AGameEntity::entityMap[target.getPos().x][target.getPos().y] = NULL;
	delete &target;
}

bool			AGameEntity::isOutOfBound()
{
	if (this->_pos.x <= 0 || this->_pos.x >= WIN_X - 1
			|| this->_pos.y <= 1 || this->_pos.y >= WIN_Y - 2)
		return true;
	return false;
}

void			AGameEntity::addEntity(AGameEntity & e){
	if (!e.handleCollision(e.getPos()))
		AGameEntity::entityMap[e.getPos().x][e.getPos().y] = &e;
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

bool        AGameEntity::handleCollision(CVector pos)
{
    AGameEntity *e = (AGameEntity::entityMap[pos.x][pos.y]);
    if (e == NULL)
        return (false);
	else if (e->_type == TPLAYER) {
		if (e->_hp > 0){
			e->_hp--;
			this->deleteEntity(*this);
			return true;
		} else {
			//game over here ;
            this->deleteEntity(*e);
            AGameEntity::currentPlayer = NULL;            
            return false;
		}	
	} else if (this->_type == TPLAYER) {
		if (this->_hp > 0){
			this->_hp--;
            this->deleteEntity(*e);
            return false;
		} else {
			//game over here ;
			this->deleteEntity(*this);
            AGameEntity::currentPlayer = NULL;            
			return true;
		}	
	} else if (this->_type == TOBST) {
        if (e->_type == TENEMY){
            this->deleteEntity(*e);
            return false;
        } else{
            this->deleteEntity(*this);
            return true;
        }
    } else if (this->_type == TENEMY) {
        if (e->_type == TENEMY || e->_type==TEMISSILE){
            this->deleteEntity(*e);
            return false;
        } else{
            this->deleteEntity(*this);
            return true;
        }
    } else if (this->_type == TPMISSILE) {
        //score
        if (e->getType() == TENEMY && AGameEntity::currentPlayer != NULL) {
            AGameEntity::currentPlayer->_score += 100;
            this->_score += 100;
        } else if (e->getType() == TOBST && AGameEntity::currentPlayer != NULL) {
            AGameEntity::currentPlayer->_score += 10;
            this->_score += 10;
        }
        this->deleteEntity(*this);
        this->deleteEntity(*e);
        return true;
    } else if (this->_type == TEMISSILE) {
        this->deleteEntity(*this);
        this->deleteEntity(*e);
        return true;
    }
    return false;
}

AGameEntity     ***AGameEntity::entityMap = AGameEntity::init();
AGameEntity     *AGameEntity::currentPlayer = NULL;
