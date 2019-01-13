/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:25:44 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/13 19:18:13 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "CVector.hpp"
#include "AGameEntity.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Obstacle.hpp"
#include "ft_retro.hpp"
#include <ncurses.h>

class GameManager {
	public: 
		GameManager();
		GameManager(CVector winsize, int hudsize);
		~GameManager(); 

		CVector		getWinSize(void) const;
		int			getHUDSize(void) const;
		int			getInput(void) const;
		WINDOW		*getWin(void) const;

		int			setInput(int input);

		void		addEntity(AGameEntity &target);
		void		randEntities(void);

		void		initMap(void);
		void		displayMap(void);
		void		displayHud(void);
		void		scrollMap(void);
		void		entitiesAction(void);
		void		updateMap(void);

	private:

		GameManager(GameManager const &src); 
		GameManager	&operator=(GameManager const &rhs);
		void		init(void);

		CVector			_winSize;
		int				_HUDSize;
		int				_input;
		int				_speed;
		clock_t			_startGame;
		clock_t			_lastAction;
		WINDOW			*_win;
		WINDOW			*_hud;
};

#endif
