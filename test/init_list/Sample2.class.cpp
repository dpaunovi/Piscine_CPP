/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:23:15 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/08 11:33:28 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

}

Sample2::~Sample2(void) {

	std::cout << "Destructor called" << std::endl;
	return;

}
