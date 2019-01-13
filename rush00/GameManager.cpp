/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:48 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 19:21:49 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameManager.hpp"
#include <iostream>
#include <sstream>
#include <time.h>

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
	srand(time(NULL));
	this->_speed = 10;
	this->_win = newwin(WIN_X, WIN_Y, 0 + HUD, 3);
	this->_hud = newwin(HUD, WIN_Y, 0, 3);
	nodelay(this->_win, 1);
	keypad(this->_win, 1);
	noecho();
	curs_set(0);
	this->_startGame = clock();

	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			AGameEntity::entityMap[i][j] = NULL;
		}
	}
	this->initMap();
}

void			GameManager::initMap(void){
 	Player		*p = new Player(CVector(WIN_X/2, 2), PLAYER_SPRITE);

	AGameEntity::currentPlayer = p;
	AGameEntity::addEntity(*p);

	this->randEntities();		
}

void			spawnBigEntity(int x){
	if (rand() % 2 == 1){
		AGameEntity::addEntity(*(new Obstacle(CVector(x, WIN_Y - 5), '/')));
		AGameEntity::addEntity(*(new Obstacle(CVector(x, WIN_Y - 4), '\\')));
		AGameEntity::addEntity(*(new Obstacle(CVector(x+1, WIN_Y - 5), '\\')));
		AGameEntity::addEntity(*(new Obstacle(CVector(x+1, WIN_Y - 4), '/')));
	} else {
		AGameEntity::addEntity(*(new Obstacle(CVector(x, WIN_Y - 5), '[')));
		AGameEntity::addEntity(*(new Obstacle(CVector(x, WIN_Y - 4), ']')));
	}
}

void			GameManager::randEntities(void) {
	for (int j = 0; j < WIN_X; j++) {
		if ((rand() % 300) == 1)
			AGameEntity::addEntity(*(new Obstacle(CVector(j, WIN_Y - 3), OBSTACLE_SPRITE)));
		if ((rand() % 1000) == 1)
			AGameEntity::addEntity(*(new Enemy(CVector(j, WIN_Y - 3), ENEMY_SPRITE)));
		if (j > 2 && j < WIN_X - 3 && (rand() % 1000) == 1)
			spawnBigEntity(j);
	}	
}

void			GameManager::displayMap(void) {
	AGameEntity ***map = AGameEntity::entityMap;

	werase(this->_win);
	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			if (map[i][j] != NULL) {
				wmove(this->_win, i, j);
				map[i][j]->setUse(1);
				std::string	str(1, map[i][j]->getSprite());
				wprintw(this->_win, str.c_str());
			} else {
				wprintw(this->_win, " ");
			}
		}
	}
	box(this->_win, 1, 0);
	wnoutrefresh(this->_win);
	return;
}

void			GameManager::displayHud(void) {
	if (AGameEntity::currentPlayer != NULL) {
		werase(this->_hud);
		wmove(this->_hud, HUD/4, 2);
		wprintw(this->_hud, "Score : %d", AGameEntity::currentPlayer->getScore());
		wmove(this->_hud, HUD/4 * 3, 2);
		wprintw(this->_hud, "Time : %d", (clock() - this->_startGame) / 1000000);
		wmove(this->_hud, HUD/2, WIN_Y - 15);
		wprintw(this->_hud, "Health : %d", AGameEntity::currentPlayer->getHp());
	} else {
		wmove(this->_hud, HUD/2, WIN_Y/2 - 5);
		wprintw(this->_hud, "GAME OVER");
	}
	box(this->_hud, 0, 0);
	wnoutrefresh(this->_hud);
}

void			GameManager::scrollMap(void) {
	AGameEntity ***map = AGameEntity::entityMap;

	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			if (map[i][j] != NULL && (map[i][j]->getType() != TPLAYER)) {
				map[i][j]->moveLeft();
			}
		}
	}
}

void			GameManager::entitiesAction(void) {
	AGameEntity ***map = AGameEntity::entityMap;
	
	for (int i = 0; i < WIN_X; i++) {
		for (int j = 0; j < WIN_Y; j++) {
			if (map[i][j] != NULL && map[i][j]->getUse()) {
				map[i][j]->setUse(0);
				map[i][j]->updateEntity(this->_input);
			}
		}
	}
}

void			GameManager::updateMap(void) {
	this->entitiesAction();

	if (isAvailable(this->_lastAction, this->_speed)) {
		this->scrollMap();
		this->randEntities();
		this->_lastAction = clock();
	}

	this->displayHud();
	this->displayMap();
	doupdate();
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
