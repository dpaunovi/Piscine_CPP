/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:19:56 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 09:21:08 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <iomanip> 

int	getPrecision(char *data) {
	int length = static_cast<int>(strlen(data));
	int dot = 0;
	int i = 0;
	int precision = 0;
	if (data[i] == '-' || data[i] == '+') {
		i++;
	}
	while (i < length) {
		if (data[i] >= '0' && data[i] <= '9') {
			precision += dot;
		}
		else if (data[i] == '.') {
			if (!dot) {
				dot = true;
			}
			else {
				return precision;
			}
		}
		else {
			return precision;
		}
		i++;
	}
	return precision;
}

char	toChar(double value) {
	if (value < 0 || value > 127)
		return -1;
	char result = static_cast<char>(value);
	return result;
}

void	printChar(double value) {
	if (std::isnan(value) ||std::isinf(value)) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char charRes = toChar(value);
	if (charRes >= 32 && charRes <= 126) {
		std::cout << "char: '"<< charRes << "'" << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
	}
}

int		toInt(double value) {
	int result = static_cast<int>(value);
	return result;
}

void	printInt(double value) {
	if (std::isnan(value) ||std::isinf(value)) {
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	int intRes = toInt(value);
	std::cout << "int: "<< intRes << std::endl;
}

void	printFloat(double value, int precision) {
	precision += (precision) ? 0 : 1;
	float floatRes = static_cast<float>(value);
	std::cout << "float: " << std::setprecision(precision) << std::fixed <<floatRes << "f" << std::endl;
}

void	printDouble(double value, int precision) {
	precision += (precision) ? 0 : 1;
	std::cout << "double: " << std::setprecision(precision) <<  std::fixed << value << std::endl;
}

int	main(int ac, char **av)
{
	double value;
	int precision;
	for (int i = 1; i < ac; ++i) {
		precision = getPrecision(av[i]);
		if (strlen(av[i]) == 1
			&& av[i][0] >= 32 && av[i][0] <= 126
			&& av[i][0] < '0' && av[i][0] > '9') {
			value = av[i][0];
		}
		else {
			value = atof(av[i]);
		}
		printChar(value);
		printInt(value);
		printFloat(value, precision);
		printDouble(value, precision);
	}
	return 0;
}