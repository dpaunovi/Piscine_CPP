/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphUI.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 18:10:28 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 23:12:59 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GraphUI.hpp"
#include <iostream>

GraphUI::GraphUI() {

}

GraphUI::~GraphUI() {

}

void        GraphUI::display() {}


GraphUI &	GraphUI::operator=(GraphUI const &rhs)
{
    // Code assignation here
    static_cast<void>(rhs);
    return *this;
}
