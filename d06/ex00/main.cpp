/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:19:56 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/15 16:28:23 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int     main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Bad parameter" << std::endl;
    } else {
        Conversion(argv[1]);
    }
    return 0;
}