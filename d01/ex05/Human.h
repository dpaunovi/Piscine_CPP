/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:26:28 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 20:33:12 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.h"
#include <iostream>

class Human {
	public:
		Human(void);
		~Human(void);
		void		*identify(void);
		Brain		&getBrain(void);
	private:
		Brain		_brain;
};

#endif
