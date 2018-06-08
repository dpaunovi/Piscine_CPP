/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:34:56 by dpaunovi          #+#    #+#             */
/*   Updated: 2018/06/08 11:36:43 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int		main(void) {

	Sample1 instance1('a', 42, 4.2f);
	Sample2 instance2('z', 13, 3.14f);

	return 0;
}
