/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:17:21 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 11:55:37 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*generate(void)
{
	int	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "New A" << std::endl;
		return (new A());
	}
	else if (random == 1)
	{
		std::cout << "New B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "New C" << std::endl;
		return (new C());
	}
}

void	identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A pointer!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B pointer!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C pointer!" << std::endl;
	else
		std::cout << "Unknown pointer" << std::endl;
}

void	identify_from_reference( Base & p )
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A reference!" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B reference!" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C reference!" << std::endl;
	else
		std::cout << "Unknown reference" << std::endl;
}

int		main( void )
{
	srand(clock());

	Base	*base = generate();
	identify_from_pointer(base);
	base = generate();
	identify_from_reference(*base);

	return 0;
}
