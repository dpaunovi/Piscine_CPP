/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:20:36 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 19:24:50 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "---	Printing with pointer	---" << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << "---	Printing with reference	---" << std::endl;
	std::cout << ref << std::endl;

	return 0;
}
