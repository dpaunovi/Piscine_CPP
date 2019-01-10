/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:29:04 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/10 15:46:38 by dpaunovi         ###   ########.fr       */
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

float		Fixed::toFloat(void) const {
	float	n;

	n = getRawBits();
	return (n / (1 << this->_bits));	
}

int			Fixed::toInt(void) const {
	return (this->_raw >> this->_bits);
}

void		Fixed::setRawBits(int const raw) {
	this->_raw = raw;
	return;
}

int 		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

bool		Fixed::operator<(Fixed const &rhs) const {
	return this->_raw < rhs.getRawBits();
}

bool		Fixed::operator>(Fixed const &rhs) const {
	return this->_raw > rhs.getRawBits();
}

bool		Fixed::operator<=(Fixed const &rhs) const {
	return this->_raw <= rhs.getRawBits();
}

bool		Fixed::operator>=(Fixed const &rhs) const {
	return this->_raw >= rhs.getRawBits();
}

bool		Fixed::operator==(Fixed const &rhs) const {
	return this->_raw == rhs.getRawBits();
}

bool		Fixed::operator!=(Fixed const &rhs) const {
	return this->_raw != rhs.getRawBits();
}

Fixed		Fixed::operator+(Fixed const &rhs) {
	Fixed	ret;

	ret.setRawBits(this->_raw + rhs.getRawBits());
	return ret;
}

Fixed		Fixed::operator-(Fixed const &rhs) {
	Fixed	ret;

	ret.setRawBits(this->_raw - rhs.getRawBits());
	return ret;
}

Fixed		Fixed::operator*(Fixed const &rhs) {
	return(Fixed((this->toFloat() * rhs.toFloat())));
}

Fixed		Fixed::operator/(Fixed const &rhs) {
	Fixed	ret;

	ret.setRawBits((this->toFloat() * rhs.toFloat()));
	return ret;
}

Fixed		&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_raw = rhs.getRawBits();
	}
	return *this;
}

Fixed		Fixed::operator++(void) {
	this->_raw++;
	return *this;
}

Fixed		Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed		Fixed::operator--(void) {
	this->_raw--;
	return *this;
}

Fixed		Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed		&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs) {
		return lhs;
	} else {
		return rhs;
	}
}

Fixed		&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs) {
		return lhs;
	} else {
		return rhs;
	}
}

Fixed const	&Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs < rhs) {
		return lhs;
	} else {
		return rhs;
	}
}

Fixed const	&Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs > rhs) {
		return lhs;
	} else {
		return rhs;
	}
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
