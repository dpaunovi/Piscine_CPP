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
	std::cout << "Delete Instance" << std::endl;
	return;
}

void Contact::set_firstname(std::string res) {
	this->_firstname = res;
	return;
}

void Contact::set_lastname(std::string res) {
	this->_lastname = res;
	return;
}

void Contact::set_nickname(std::string res) {
	this->_nickname = res;
	return;
}

void Contact::set_login(std::string res) {
	this->_login = res;
	return;
}

void Contact::set_address(std::string res) {
	this->_address = res;
	return;
}

void Contact::set_mail(std::string res) {
	this->_mail = res;
	return;
}

void Contact::set_phone(std::string res) {
	this->_phone = res;
	return;
}

void Contact::set_birthday(std::string res) {
	this->_birthday = res;
	return;
}

void Contact::set_meal(std::string res) {
	this->_meal = res;
	return;
}

void Contact::set_color(std::string res) {
	this->_color = res;
	return;
}

void Contact::set_secret(std::string res) {
	this->_secret = res;
	return;
}

std::string Contact::get_firstname(void) const {
	return this->_firstname;
}

std::string Contact::get_lastname(void) const {
	return this->_lastname;
}

std::string Contact::get_nickname(void) const {
	return this->_nickname;
}

std::string Contact::get_login(void) const {
	return this->_login;
}

std::string Contact::get_address(void) const {
	return this->_address;
}

std::string Contact::get_mail(void) const {
	return this->_mail;
}

std::string Contact::get_phone(void) const {
	return this->_phone;
}

std::string Contact::get_birthday(void) const {
	return this->_birthday;
}

std::string Contact::get_meal(void) const {
	return this->_meal;
}

std::string Contact::get_color(void) const {
	return this->_color;
}

std::string Contact::get_secret(void) const {
	return this->_secret;
}
