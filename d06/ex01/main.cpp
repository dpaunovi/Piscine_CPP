/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:03:01 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 12:19:00 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "SerializedData.hpp"
#include "Data.hpp"

void	*serialize(void) {
	SerializedData *randomData = new SerializedData;
	for (int i = 0; i < 8; ++i) {
		randomData->s1[i] = 32 + (rand() % 94);
		randomData->s2[i] = 32 + (rand() % 94);
	}
	randomData->s1[8] = 0;
	randomData->s2[8] = 0;
	randomData->n = rand() * ((rand() % 2) ? 1 : -1);
	return reinterpret_cast<void *>(randomData);
}

Data *deserialize(void *raw) {
	SerializedData *serData;
	Data *data = new Data;
	serData = reinterpret_cast<SerializedData *>(raw);
	data->s1 = static_cast<std::string>(serData->s1);
	data->n = serData->n;
	data->s2 = static_cast<std::string>(serData->s2);
	return data;
}

int	main(void) {
	srand(time(NULL));
	void *data_p = serialize();
	Data *data = deserialize(data_p);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return 0;
}