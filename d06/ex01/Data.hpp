/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:05:20 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 11:21:36 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data {
    public: 
        Data();
        Data(Data const &src); 
        ~Data(); 

        Data	&operator=(Data const &rhs);

        std::string     s1;
        int             n;
        std::string     s2;

    private:
};

#endif
