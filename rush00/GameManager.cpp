/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:48 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 00:03:37 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameManager.hpp"
#include <iostream>

//Public

//	constructors

GameManager::GameManager() {
	this->_winSize = CVector(50, 20);
	this->_HUDSize = 5;
	this->init();
}

GameManager::GameManager(CVector winsize, int hudsize) : _winSize(winsize), _HUDSize(hudsize){
	this->init();
}


GameManager::~GameManager() {
	endwin(); //ncurses end
}

void			GameManager::init(void) {
	initscr(); //ncurses start
	this->_win = newwin(WIN_X, WIN_Y, 10, 10);
	nodelay(this->_win, 1);
	keypad(this->_win, 1);
	noecho();
	box(this->_win, 1, 0);
	
	// curs_set(0);

	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			AGameEntity::entityMap[i][j] = NULL;
		}
	}
 	Player		*p = new Player(CVector(WIN_X/2, 2), '>');

	this->addEntity(*p);
}

void			GameManager::addEntity(AGameEntity &e) {
	AGameEntity::entityMap[e.getPos().x][e.getPos().y] = &e;
	wmove(this->_win, e.getPos().x, e.getPos().y);
	// std::string test = "yolo";
	std::string	str(1, e.getSprite());
	wprintw(this->_win, str.c_str());
}

void			GameManager::displayMap(void) {
	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			wmove(this->_win, i, j);
			if (AGameEntity::entityMap[i][j] != NULL) {
				AGameEntity::entityMap[i][j]->setUse(1);
				std::string	str(1, AGameEntity::entityMap[i][j]->getSprite());
				wprintw(this->_win, str.c_str());
			} else {
				wprintw(this->_win, " ");
			}
		}
	}
	box(this->_win, 1, 0);
	wrefresh(this->_win);
	return;
}

void			GameManager::updateMap(void) {
	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			if (AGameEntity::entityMap[i][j] != NULL && AGameEntity::entityMap[i][j]->getUse()) {
				AGameEntity::entityMap[i][j]->setUse(0);
				AGameEntity::entityMap[i][j]->updateEntity(this->_input);
			}
		}
	}
	this->displayMap();
}

//	getter

CVector			GameManager::getWinSize(void) const{return this->_winSize;}
int				GameManager::getHUDSize(void) const{return this->_HUDSize;}
WINDOW			*GameManager::getWin(void) const{return this->_win;}
int				GameManager::getInput (void) const { return (this->_input); }

//	setter

int				GameManager::setInput (int input) {
	this->_input = input;
	return input;
}

//	member func

//endPublic
//Private

GameManager::GameManager(GameManager const &src) {
	*this = src;
}

GameManager &	GameManager::operator=(GameManager const &rhs)
{
	this->_winSize = rhs.getWinSize();
	this->_HUDSize = rhs.getHUDSize();
	this->_win = rhs.getWin();

    return *this;
}
//end Private
