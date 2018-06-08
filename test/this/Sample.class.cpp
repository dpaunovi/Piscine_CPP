/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 19:45:01 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/08 11:13:48 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) {

	std::cout << "Member function bar called" << std::endl;
	return ;
}
