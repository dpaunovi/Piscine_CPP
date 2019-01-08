/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:36:46 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 13:49:50 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.h"
#include <iostream>

Pony::Pony(std::string p1, std::string p2, std::string p3) : _gender(p1), _color(p2), _type(p3) {
	std::cout << this->_type << " has Born" << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << "The " << this->_type << " died !" << std::endl;
	return;
}

void	Pony::infos(void) {
	std::cout << this->_type << ", ";
	std::cout << this->_gender << ", ";
	std::cout << this->_color << std::endl;
	return;
}
