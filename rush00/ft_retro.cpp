/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 12:27:32 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/13 12:31:21 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

bool	isAvailable(clock_t last, int speed) {
	if ((double(clock() - last) / (CLOCKS_PER_SEC / speed)) > 1)
		return (true);
	else
		return(false);
}