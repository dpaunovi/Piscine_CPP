/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 14:09:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 22:12:20 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"

Manager::Manager(void) {}

Manager::Manager(Manager const &src) {*this = src;}

Manager::~Manager(void) {}

int        Manager::setInput(int input) {
    _input = input;
    return input;
}

void        Manager::update(void) {
    std::list<IMonitorModule*>::iterator it = _modules.begin();

    while (it != _modules.end()) {
        (*it)->update();
        ++it;
    }
}

std::list<IMonitorModule *>     Manager::getModules() {
    return Manager::_modules;
}

Manager     &Manager::operator=(Manager const &rhs)
{
    // Code assignation here
    static_cast<void>(rhs);
    return *this;
}

std::list<IMonitorModule *> Manager::initModules() {
    std::list<IMonitorModule *> _modules;

    _modules.push_back(new Date());
    _modules.push_back(new Username());
    _modules.push_back(new Hostname());
    _modules.push_back(new OSinfo());
    _modules.push_back(new CPUinfo());
    _modules.push_back(new RAMinfo());
    _modules.push_back(new Network());
    return _modules;
}

std::list<IMonitorModule *> Manager::_modules = Manager::initModules();