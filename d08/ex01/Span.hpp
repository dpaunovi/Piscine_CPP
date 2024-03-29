/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:29:30 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/18 18:52:47 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>

class Span {
    public: 
        Span();
        Span(unsigned int len);
        Span(Span const &src); 
        ~Span(); 

        Span	&operator=(Span const &rhs);

        template<typename T>
        void    addNumber(T it, T end) {
            while (it != end) {
                this->addNumber(*it++);
            }
        }
        void    addNumber(int nb);

        void    display(void);
        void    clear(void);
        int     shortestSpan(void);
        int     longestSpan(void);

    private:
        std::multiset<int>  _lst;
        unsigned int    _size;
};

#endif