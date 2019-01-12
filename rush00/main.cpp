/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 10:50:54 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/13 00:00:53 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "GameManager.hpp"
#include "Player.hpp"

int		main()
{
	GameManager		gm(CVector(WIN_X, WIN_Y), HUD);

	while ((gm.setInput(wgetch(gm.getWin()))) != 27)
	{
		gm.updateMap();
	}

	return 0;
}
