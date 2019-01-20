/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 12:23:27 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 23:14:39 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"
#include "ShellUI.hpp"
#include "GraphUI.hpp"
#include <ncurses.h>
#include <iostream>

#include <ctime>

bool	isAvailable(clock_t last, int speed) {
	if ((double(clock() - last) / (CLOCKS_PER_SEC / speed)) > 1)
		return (true);
	else
		return(false);
}

int		main(int argc, char **argv) {
	Manager		m;

	if (argc != 2) {
		std::cout << "usage: ./ft_gkrellm [option]" << std::endl;
		std::cout << "Option:" << std::endl;
		std::cout << "\tshell" << std::endl;
		std::cout << "\tgraph" << std::endl;
	} else {
		clock_t		last;
		if (static_cast<std::string>(argv[1]) == "shell") {
			ShellUI		shell;
			while ((m.setInput(getch())) != 27) {
				last = clock();
				m.update();
				shell.display();
				while (!(isAvailable(last, 1)));
			}
			endwin();
		} else if (static_cast<std::string>(argv[1]) == "graph") {
			std::cout << "Not available, sorry :(" << std::endl;
		} else {
			std::cout << "invalid option or syntax: " << argv[1] << std::endl;
			std::cout << "Option:" << std::endl;
			std::cout << "\tshell" << std::endl;
			std::cout << "\tgraph" << std::endl;
		}
	}
	return 0;
}