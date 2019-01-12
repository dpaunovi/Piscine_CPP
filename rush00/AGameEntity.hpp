/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:39:17 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 23:50:04 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMEENTITY_HPP
#define AGAMEENTITY_HPP

#define WIN_X 20
#define WIN_Y 50
#define HUD 5

#include "CVector.hpp"

class AGameEntity {
	public: 
		AGameEntity();
		AGameEntity(CVector v, char c);
		AGameEntity(AGameEntity const &src);
		~AGameEntity();

		AGameEntity	&operator=(AGameEntity const &rhs);
		static AGameEntity		***entityMap;

		CVector			getPos(void) const;
		char			getSprite(void) const;
		bool			getUse(void) const;

		void			setUse(bool b);

		void            moveUp(void);
		void            moveDown(void);
		void            moveLeft(void);
		void            moveRight(void);
		virtual void	updateEntity(int input);
		void			deleteEntity(AGameEntity &target);

	protected:
		CVector			_pos;
		char			_sprite;
		bool			_use;

	private:
		static AGameEntity     ***init(void);

};

#endif
