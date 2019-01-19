/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:09:08 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:09:13 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

class Date {
    public: 
        Date();
        Date(Date const &src); 
        ~Date(); 

        Date	&operator=(Date const &rhs);

    private:
};

#endif
