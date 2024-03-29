/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hostname.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:09:01 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 19:51:54 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAME_HPP
#define HOSTNAME_HPP

#include "AMonitorModule.hpp"
#include <iostream>

class Hostname : public AMonitorModule<std::string> {
    public: 
        Hostname();
        ~Hostname();

        void        update(void);
        std::string getData(void);

        Hostname	&operator=(Hostname const &rhs);

    private:
        std::string _data;
        Hostname(Hostname const &src);

};

#endif
