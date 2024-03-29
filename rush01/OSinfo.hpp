/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:08:39 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 22:08:49 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFO_HPP
#define OSINFO_HPP

#include "AMonitorModule.hpp"
#include <iostream>
#include <sys/utsname.h>

struct Os {
    struct utsname  uts;
    char            mac[1024];
};

class OSinfo : public AMonitorModule<struct Os> {
    public:
        OSinfo();
        ~OSinfo();

        void            update(void);
        struct Os       getData(void);

        OSinfo	&operator=(OSinfo const &rhs);

    private:
        struct Os  _data;
        OSinfo(OSinfo const &src);
};

#endif
