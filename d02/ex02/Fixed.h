/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:29:14 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/10 15:34:29 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed					&operator=(Fixed const &rhs);
		Fixed					operator+(Fixed const &rhs);
		Fixed					operator-(Fixed const &rhs);
		Fixed					operator*(Fixed const &rhs);
		Fixed					operator/(Fixed const &rhs);
		Fixed					operator++(void);
		Fixed					operator--(void);
		Fixed					operator++(int);
		Fixed					operator--(int);
		bool					operator<(Fixed const &rhs) const;
		bool					operator>(Fixed const &rhs) const;
		bool					operator<=(Fixed const &rhs) const;
		bool					operator>=(Fixed const &rhs) const;
		bool					operator==(Fixed const &rhs) const;
		bool					operator!=(Fixed const &rhs) const;

		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt(void) const;
		
		static Fixed			&min(Fixed &lhs, Fixed &rhs);
		static Fixed			&max(Fixed &lhs, Fixed &rhs);
		static const Fixed		&min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed		&max(Fixed const &lhs, Fixed const &rhs);

	private:

		int						_raw;
		static int const		_bits = 8;
};

std::ostream	&operator << (std::ostream &o, Fixed const &rhs);

#endif
