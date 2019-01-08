/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:36:35 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 13:49:21 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony
{
	public:

		Pony(std::string p1, std::string p2, std::string p3);
		~Pony(void);

		void		infos(void);

	private:

		std::string	_gender;
		std::string	_color;
		std::string	_type;
};

#endif
