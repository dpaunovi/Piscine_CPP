#include <iostream>
#include "Contact.h"

int		add_contact(Contact *list) {
	std::string	input;

	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a Last Name: ";
	std::cin >> input;
	list->set_lastname(input);
	std::cout << "Choose a Nickname: ";
	std::cin >> input;
	list->set_nickname(input);

	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);
	std::cout << "Choose a First Name: ";
	std::cin >> input;
	list->set_firstname(input);

	return 1;
}
