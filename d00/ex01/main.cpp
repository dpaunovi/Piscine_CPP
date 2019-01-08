/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:33:17 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 11:03:44 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "settings.h"
#include <iostream>

int		main(void) {
	int			i = 0;
	std::string input;
	Contact		list[8];

	clear();
	while (1) {

		std::cout << "Choose your option : " << std::endl;
		std::cout << "- ADD" << std::endl;
		std::cout << "- SEARCH" << std::endl;
		std::cout << "- EXIT" << std::endl;
		std::cout << "Your chaice: ";
		std::cin >> input;

		clear();

		if (input == "ADD") {
			if (i < 8) {
				add_contact(&list[i]);
				i++;
				std::cout << "New contact added successfully" << std::endl;
				clear();
			} else {
				std::cout << "Sorry, too much contact has registered..." << std::endl;
			}
		} else if (input == "SEARCH") {
			std::cout << "Total: " << i << std::endl;
			for (int nb = 0; nb < i; nb++) {
				infos_contact(&list[nb], nb + 1);
			}
		} else if (input == "EXIT") {
			std::cout << "Good bye" << std::endl;
			break;
		} else {
			std::cout << "Sorry, this command not exist. Try again" << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}
