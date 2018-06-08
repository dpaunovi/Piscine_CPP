/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:54:24 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/08 12:05:49 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return;

}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;

}

void	Sample::bar(void) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return;

}
