/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:32:02 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 11:32:29 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public: 
        Base();
        Base(Base const &src); 
        virtual ~Base(); 

        Base	&operator=(Base const &rhs);

    private:
};

#endif
