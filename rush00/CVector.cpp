/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CVector.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:00:54 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 14:04:38 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CVector.hpp"
#include <iostream>

CVector::CVector() : x(0), y(0){
}

CVector::CVector(int ax, int ay) : x(ax), y(ay){
}

CVector::CVector(CVector const &src) {
    *this = src;
}

CVector::~CVector() {
}

CVector &	CVector::operator=(CVector const &rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;

    return *this;
}
