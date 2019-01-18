/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:22:21 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/18 12:20:08 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>

template<typename T>
int     easyfind(T &container, int target) {
    typename T::iterator    it = std::find(container.begin(), container.end(), target);
    if (it != container.end())
        return *it;
    throw std::logic_error("Not found.");
}

#endif