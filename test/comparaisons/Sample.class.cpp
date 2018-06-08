/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:03:19 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/08 16:15:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getFoo(void) {

	return this->_foo;
}

int		Sample::compare(Sample *other) const {

	if (this->_foo < other->getFoo())
		return -1
	else if (this->_foo > other->getFoo())
		return 1

	return 0;
}
