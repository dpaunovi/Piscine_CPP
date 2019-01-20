/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 15:59:57 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 22:17:06 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMONITORMODULE_HPP
#define AMONITORMODULE_HPP

#include "IMonitorModule.hpp"
#include <iostream>

template <typename T>
class AMonitorModule : public IMonitorModule {
    public:
        AMonitorModule<T>() {}
        virtual             ~AMonitorModule<T>() {}

        std::string         getName(void) {return _name;}
        virtual T           getData(void) = 0;

        AMonitorModule<T>	&operator=(AMonitorModule<T> const &rhs) {static_cast<void>(rhs);}

    protected:
        std::string         _name;

    private:
        AMonitorModule<T>(AMonitorModule<T> const &src);
};

#endif
