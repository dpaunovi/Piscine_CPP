/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:29:06 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/18 17:41:53 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Span.hpp"

int     main(void) {
    unsigned int    max = 100000;
    Span            sp = Span(max);
    Span            empty = Span(max);

    srand(time(NULL));

    try {
        sp.addNumber(-12);
        sp.addNumber(-5);
        sp.addNumber(10);
        sp.addNumber(21);
        sp.addNumber(42);
        sp.addNumber(13);
        sp.addNumber(1);
        sp.addNumber(0);
    } catch(std::logic_error e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Shortest > (-5 - (-12)) : " << (-5-(-12)) << std::endl;
        std::cout << "Longest > (42 - (-12))  : " << (42-(-12)) << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::logic_error e) {
        std::cout << e.what() << std::endl;
    }
    
    sp.display();
    std::cout << "------------ clear list --------------" << std::endl;
    sp.clear();

    std::cout << "-------- rand 100.000 values ---------" << std::endl;

    try {
        for (unsigned int i = 0; i < max; i++) {
            sp.addNumber(rand() % 1000000);
        }
    } catch(std::logic_error e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
    } catch (std::logic_error e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "--- Empty list shortest --- " << std::endl;
        std::cout << empty.shortestSpan() << std::endl;
    } catch (std::logic_error e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "--- Empty list longest  --- " << std::endl;
        std::cout << empty.longestSpan() << std::endl;
    } catch (std::logic_error e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}