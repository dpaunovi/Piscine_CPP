/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMinfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 19:47:30 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 19:48:13 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMINFO_HPP
#define RAMINFO_HPP

#include "AMonitorModule.hpp"
#include <sys/utsname.h>

#include <sys/types.h>
#include <stdio.h>
#include <mach/mach_host.h>
#include <mach/processor_info.h>
#include <sys/sysctl.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <sys/socket.h>


class RAMinfo : public AMonitorModule<std::string> {
    public:
        RAMinfo();
        ~RAMinfo();

        void            update(void);
        std::string  getData(void);

        RAMinfo	&operator=(RAMinfo const &rhs);

    private:
        std::string  _data;
        RAMinfo(RAMinfo const &src);
};

#endif
