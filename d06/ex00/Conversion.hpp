/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:49:19 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/15 15:49:26 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

class Conversion {
    public: 
        Conversion();
        Conversion(Conversion const &src); 
        ~Conversion(); 

        Conversion	&operator=(Conversion const &rhs);

    private:
};

#endif
