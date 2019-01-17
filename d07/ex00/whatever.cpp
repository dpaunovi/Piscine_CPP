/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:04:18 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/17 13:13:05 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void    swap(T &v1, T &v2) {
    T tmp = v1;
    v1 = v2;
    v2 = tmp;
}

template<typename T>
T       min(T &v1, T &v2) {
    return ((v1 < v2) ? v1 : v2);
}

template<typename T>
T       max(T &v1, T &v2) {
    return ((v1 > v2) ? v1 : v2);    
}

int     main(void) {

}