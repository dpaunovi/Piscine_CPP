/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:29:37 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/18 22:05:30 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span() {
    this->_size = 0;
}

Span::Span(unsigned int len) {
    this->_size = len;
}

Span::Span(Span const &src) {
    // Copy here
    *this = src;
}

Span::~Span() {

}

void    Span::display(void) {
    std::cout << std::endl;
    for (std::multiset<int>::iterator it = this->_lst.begin(); it != this->_lst.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

void    Span::clear(void) {
    this->_lst.clear();
}


void    Span::addNumber(int n) {
    if (this->_lst.size() < this->_size) {
        this->_lst.insert(n);
    } else {
        throw std::logic_error("Container is full !");
    }
}

int     Span::shortestSpan(void) {
	int		min = -1;
    if (this->_lst.size() > 1) {
		for (std::multiset<int>::iterator it = this->_lst.begin(); std::next(it, 1) != this->_lst.end(); ++it) {
			if ((*std::next(it, 1) - *(it)) < min || min == -1) {
				min = *std::next(it, 1) - *(it);
            } else if (min == 0) {
                return min;
            }
    	}
        return min;
    } else {
        throw std::logic_error("Size of list is too small.");
    }
}

int     Span::longestSpan(void) {
    if (this->_lst.size() > 1) {
        return *this->_lst.rbegin() - *this->_lst.begin();
    } else {
        throw std::logic_error("Size of list is too small.");
    }
}

Span &	Span::operator=(Span const &rhs)
{
    // Code assignation here
    this->_lst = rhs._lst;
    this->_size = rhs._size;
    return *this;
}
