/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 19:20:55 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/18 19:45:56 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {return;}
		MutantStack(MutantStack const &src) {*this = src;}
		~MutantStack(void) {return;}
        MutantStack &operator=(MutantStack const &rhs) {
            std::stack<T>::operator=(rhs);
        }

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() { return std::stack<T>::c.begin(); }
		iterator	end() { return std::stack<T>::c.end() ; }
};


#endif