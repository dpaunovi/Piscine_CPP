/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:49:19 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/07 15:17:24 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.h"

Contact::Contact(void) {
	std::cout << "New Instance" << std::endl;
	return;
}

Contact::~Contact(void) {
	return;
}

void Contact::add(void) {
	std::string res;

	std::cout << "First Name: ";
	std::cin >> res;
	this->first_name = res;
	std::cout << "Last Name: ";
	std::cin >> res;
	this->last_name = res;
	std::cout << "Nickname: ";
	std::cin >> res;
	this->nickname = res;
	std::cout << "Login: ";
	std::cin >> res;
	this->login = res;
	std::cout << "Postal address ";
	std::cin >> res;
	this->postal_address = res;
	std::cout << "E-mail: ";
	std::cin >> res;
	this->email = res;
	std::cout << "Phone Number: ";
	std::cin >> res;
	this->phone_number = res;
	std::cout << "Birthday date: ";
	std::cin >> res;
	this->birthday_date = res;
	std::cout << "Favorite meal: ";
	std::cin >> res;
	this->favorite_meal = res;
	std::cout << "Underwear color: ";
	std::cin >> res;
	this->underwear_color = res;
	std::cout << "Darkest secret: ";
	std::cin >> res;
	this->darkest_secret = res;

	return ;
}

void Contact::getInfos(void) {
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->email << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;

	return ;
}
