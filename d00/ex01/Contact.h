/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 13:49:18 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 10:44:24 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;
	std::string get_login(void) const;
	std::string get_address(void) const;
	std::string get_mail(void) const;
	std::string get_phone(void) const;
	std::string get_birthday(void) const;
	std::string get_meal(void) const;
	std::string get_color(void) const;
	std::string get_secret(void) const;

	void		set_firstname(std::string);
	void		set_lastname(std::string);
	void		set_nickname(std::string);
	void		set_login(std::string);
	void		set_address(std::string);
	void		set_mail(std::string);
	void		set_phone(std::string);
	void		set_birthday(std::string);
	void		set_meal(std::string);
	void		set_color(std::string);
	void		set_secret(std::string);

private:

	std::string	_firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _address;
	std::string _mail;
	std::string _phone;
	std::string _birthday;
	std::string _meal;
	std::string _color;
	std::string _secret;

};

#endif
