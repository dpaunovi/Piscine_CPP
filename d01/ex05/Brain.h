/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:26:28 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/08 20:02:25 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		void		*identify(void);
	private:
		void* const	_address;
		std::string	_thalamus;
		std::string	_hypothalamus;
		std::string	_epithalamus;
};

#endif
