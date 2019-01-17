/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:04:18 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/17 14:14:20 by dpaunovi         ###   ########.fr       */
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
T const min(T const &v1, T const &v2) {
    return ((v1 < v2) ? v1 : v2);
}

template<typename T>
T const max(T const &v1, T const &v2) {
    return ((v1 > v2) ? v1 : v2);    
}

int     main(void) {
    int a = 2;
    int b = 3;

    ::swap( a, b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}