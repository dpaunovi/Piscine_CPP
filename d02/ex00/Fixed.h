/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:29:14 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/09 18:11:43 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed		&operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:

		int					_raw;
		static int const	_bits = 8;
};

#endif
