/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:09:08 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 22:17:22 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

#include "AMonitorModule.hpp"
#include <iostream>
#include <ctime>

class Date : public AMonitorModule<time_t> {
    public: 
        Date();
        Date(Date const &src); 
        ~Date(); 

        void    update(void);
        time_t  getData(void);

        Date	&operator=(Date const &rhs);

    private:
        time_t  _data;
};

#endif
