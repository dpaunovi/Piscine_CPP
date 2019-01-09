/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:29:04 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 18:40:45 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.h"

Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _bits);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(n * (1 << _bits)));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

float	Fixed::toFloat(void) const {
	float	n;

	n = getRawBits();
	return (n / (1 << this->_bits));	
}

int		Fixed::toInt(void) const {
	return (getRawBits() >> this->_bits);
}

void		Fixed::setRawBits(int const raw) {
	this->_raw = raw;
	return;
}

int 		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_raw = rhs.getRawBits();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
