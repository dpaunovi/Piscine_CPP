/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:36:53 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 13:48:31 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.h"
#include <iostream>

void	ponyOnTheHeap(void) {
	Pony *little = new Pony("male", "white", "unicorn");
	little->infos();
	delete little;
}

void	ponyOnTheStack(void) {
	Pony little = Pony("male", "red", "pony");
	return ;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	
	return 0;
}
