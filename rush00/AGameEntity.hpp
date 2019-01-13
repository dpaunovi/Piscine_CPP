/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:39:17 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 17:01:35 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMEENTITY_HPP
#define AGAMEENTITY_HPP

#define WIN_X 40
#define WIN_Y 200
#define HUD 5

#define	TPLAYER 1
#define	TOBST 2
#define	TENEMY 3
#define	TPMISSILE 4
#define	TEMISSILE 5

#define PLAYER_SPRITE '>'
#define ENEMY_SPRITE '<'
#define OBSTACLE_SPRITE 'O'

#define TPMISSILE_SPRITE '='
#define TEMISSILE_SPRITE '-'

#include "CVector.hpp"
#include <ncurses.h>

class AGameEntity {
	public: 
		AGameEntity();
		AGameEntity(CVector v, char c, int type);
		AGameEntity(AGameEntity const &src);
		virtual ~AGameEntity();

		AGameEntity	&operator=(AGameEntity const &rhs);

		static AGameEntity		*currentPlayer;
		static AGameEntity		***entityMap;

		CVector			getPos(void) const;
		char			getSprite(void) const;
		bool			getUse(void) const;
		int				getType(void) const;
		int				getHp(void) const;
		int				getScore(void) const;

		void			setUse(bool b);

		void            moveUp(void);
		void            moveDown(void);
		void            moveLeft(void);
		void            moveRight(void);
		void			moveRand(void);
		virtual void	updateEntity(int input);
		void			deleteEntity(AGameEntity &target);
		bool			isOutOfBound(); // sf : check if out of bound
		static void		addEntity(AGameEntity &e); // sf: moved from GameManager to static to add missile in map

	protected:
		CVector			_pos;
		char			_sprite;
		bool			_use;
		int				_type;
		int				_hp;
		int				_score;

	private:
		static AGameEntity	***init(void);
        bool				handleCollision(CVector pos);

};

#endif
