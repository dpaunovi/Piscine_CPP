/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:25:44 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/13 00:03:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "CVector.hpp"
#include "AGameEntity.hpp"
#include "Player.hpp"
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

		void		updateMap(void);
		void		displayMap(void);

	private:

		GameManager(GameManager const &src); 
		GameManager	&operator=(GameManager const &rhs);
		void		init(void);

		CVector			_winSize;
		int				_HUDSize;
		int				_input;
		WINDOW			*_win;
};

#endif
