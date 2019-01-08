/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:36:06 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 20:32:48 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"
#include "Human.h"
#include <iostream>

Human::Human(void) {
	std::cout << "New human was created." << std::endl;
	return;
}

Human::~Human(void) {
	std::cout << "The human was destroyed." << std::endl;
	return;
}

void	*Human::identify(void) {
	return this->_brain.identify();
}

Brain	&Human::getBrain(void) {
	return this->_brain;
}
