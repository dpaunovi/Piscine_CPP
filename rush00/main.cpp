/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 10:50:54 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 19:13:42 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "GameManager.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Missile.hpp"
#include "Obstacle.hpp"
#include "ft_retro.hpp"

int		main()
{
	GameManager		gm(CVector(WIN_X, WIN_Y), HUD);
	clock_t			last;

	while ((gm.setInput(wgetch(gm.getWin()))) != 27)
	{
		last = clock();
		gm.updateMap();
		while (!(isAvailable(last, 60)));
	}
	return 0;
}
