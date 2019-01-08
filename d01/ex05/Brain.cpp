/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:36:06 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 20:14:50 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"
#include <iostream>

Brain::Brain(void) : _address(this) {
	std::cout << "New brain was created." << std::endl;
	return;
}

Brain::~Brain(void) {
	std::cout << "The brain was destroyed." << std::endl;
	return;
}

void	*Brain::identify(void) {
	return this->_address;
}
