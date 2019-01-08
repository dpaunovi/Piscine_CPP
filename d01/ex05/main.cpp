/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:42:43 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 20:33:36 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.h"
#include <iostream>

int		main(void) {
	Human	bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return 0;
}
