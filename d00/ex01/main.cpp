/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:33:17 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/07 17:05:58 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "parameter.h"
#include <iostream>

int		main(void) {
	std::string input;
	Contact list;

	while (1) {
		std::cout << "Choose your option : " << std::endl;
		std::cout << "- ADD" << std::endl;
		std::cout << "- SEARCH" << std::endl;
		std::cout << "- EXIT" << std::endl;
		std::cout << "Your chaice: ";
		std::cin >> input;
		if (input == "ADD") {
			std::cout << "add" << std::endl;
			add_contact(list);
//			std::cout << list::get_firstname() << std::endl;
		} else if (input == "SEARCH") {
			std::cout << "search" << std::endl;
		} else if (input == "EXIT") {
			std::cout << "Good bye" << std::endl;
			break;
		} else {
			std::cout << "fail" << std::endl;
		}
	}

	return 0;
}
