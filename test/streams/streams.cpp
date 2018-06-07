/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:48:44 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/05 17:55:08 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {

	int	buff;

	std::cout << "Bonjour !" << std::endl;

	std::cout << "Quel age as-tu : ";
	std::cin >> buff;
	std::cout << "Tu as " << buff << "ans ?\nInteressant..." << std::endl;

	return 0;
}
