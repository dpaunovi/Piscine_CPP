/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:15:55 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/17 14:49:09 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename F>
void    iter(T *array, unsigned int const length, F function) {
    for (unsigned int i = 0; i < length; i++) {
        function(array[i]);
    }
    return;
}

template <typename C>
void    display(C &item) {
    std::cout << item << std::endl;
}

void    trim(int &item) {
    item++;
}

int     main(void) {
    int         lst[10] = {1,2,3,4,5,6,7,8,9,0};
    char        str[10] = "Hello boy";

    std::cout << lst[0] << lst[1] << lst[2] << lst[3] << lst[4] << lst[5]
        << lst[6] << lst[7] << lst[8] << lst[9] << std::endl;

    iter(lst, 10, &trim);

    std::cout << lst[0] << lst[1] << lst[2] << lst[3] << lst[4] << lst[5]
        << lst[6] << lst[7] << lst[8] << lst[9] << std::endl;

    iter(lst, 10, &display<int>);
    std::cout << std::endl;
    iter(str, 10, &display<char>);

    return 0;
}