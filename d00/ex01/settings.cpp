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
	std::cout << "Choose a Login: ";
	std::cin >> input;
	list->set_login(input);
	std::cout << "Choose a address: ";
	std::cin >> input;
	list->set_address(input);
	std::cout << "Choose a mail: ";
	std::cin >> input;
	list->set_mail(input);
	std::cout << "Choose a Phone: ";
	std::cin >> input;
	list->set_phone(input);
	std::cout << "Choose a Birthday: ";
	std::cin >> input;
	list->set_birthday(input);
	std::cout << "Choose a Meal: ";
	std::cin >> input;
	list->set_meal(input);
	std::cout << "Choose a color: ";
	std::cin >> input;
	list->set_color(input);
	std::cout << "Choose a secret: ";
	std::cin >> input;
	list->set_secret(input);

	return 1;
}

void	print_space(int size) {
	for (int i = 0; i < size; i++) {
		std::cout << ' ';
	}
	std::cout << '|';
}
void	print(int size, std::string str) {
	for (int i = 0; i < 10; i++) {
		if (i == 9 && i < size - 1) {
			std::cout << '.';
		} else if (i <= size - 1) {
			std::cout << str[i];
		} else {
			std::cout << ' ';
		}
	}
	std::cout << '|';
	return;
}

void	clear(void) {
	for (int i = 0; i < 50; i++)
		std::cout << std::endl;
}

int		infos_contact(Contact *list, int index) {
	std::cout << '|';
	std::cout << index;
	print_space(9);
	print(list->get_firstname().length(), list->get_firstname());
	print(list->get_lastname().length(), list->get_lastname());
	print(list->get_nickname().length(), list->get_nickname());
	std::cout << std::endl;

	return 1;
}
