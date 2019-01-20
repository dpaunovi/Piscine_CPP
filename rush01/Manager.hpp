/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:05:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 21:39:18 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "IMonitorModule.hpp"
#include "Hostname.hpp"
#include "Username.hpp"
#include "Date.hpp"
#include "OSinfo.hpp"
#include "RAMinfo.hpp"
#include "CPUinfo.hpp"
#include "Network.hpp"

#include <iostream>
#include <list>

class Manager {
    public: 
        Manager();
        Manager(Manager const &src); 
        ~Manager(); 

        int     setInput(int input);
        void    update();
        static std::list<IMonitorModule *> getModules();
        static std::list<IMonitorModule *> initModules(void);

        Manager	&operator=(Manager const &rhs);

    private:
        static std::list<IMonitorModule *>  _modules;
        int                                 _input;
};

#endif