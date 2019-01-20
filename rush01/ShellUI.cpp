/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShellUI.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:19:17 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 22:10:50 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShellUI.hpp"

ShellUI::ShellUI() {
    this->init();
}

ShellUI::~ShellUI() {

}

void        ShellUI::init() {
    initscr();
    nodelay(stdscr, 1);
    noecho();
    curs_set(0);
}

void        ShellUI::printName(std::string name) {
    printw(name.c_str());
    printw(" :\t");
}

void        ShellUI::printShell() {
    std::list<IMonitorModule*> _modules = Manager::getModules();
    std::list<IMonitorModule*>::iterator it = _modules.begin();

    while (it != _modules.end()) {

        if (AMonitorModule<int> *test = dynamic_cast<AMonitorModule<int>*>((*it))) {
            // std::cout << "Type Int" << std::endl;
        } else if (AMonitorModule<std::string> *str = dynamic_cast<AMonitorModule<std::string>*>((*it))) {
            printName(str->getName());
            printw(str->getData().c_str());
        } else if (AMonitorModule<struct Os> *os = dynamic_cast<AMonitorModule<struct Os>*>((*it))) {
            printw(os->getData().mac);
            printw("\n");
            printName(os->getName());
            printw(os->getData().uts.sysname);
            printw("\n\t\t");
            printw(os->getData().uts.machine);
            printw("\n\t\t");
            printw(os->getData().uts.release);
            printw("\n\t\t");
            printw(os->getData().uts.version);
        } else if (AMonitorModule<time_t> *date = dynamic_cast<AMonitorModule<time_t>*>((*it))) {
            time_t tmp = date->getData();

            printName(date->getName());
            printw("\t");
            printw(ctime(&tmp));
        } else if (AMonitorModule<CPU> *cpu = dynamic_cast<AMonitorModule<CPU>*>((*it))) {
            printName(cpu->getName());
            printw(cpu->getData().name.c_str());
            printw("\n\t\t");
            printw(cpu->getData().ghz.c_str());
            printw("\n\t\t");
            printw(cpu->getData().core.c_str());
            printw("\n");
            printName("CPU usage : ");
            printw(std::to_string(static_cast<float>(cpu->getData().userTicks) / 4).substr(0,4).c_str());
            printw("%% user, ");
            printw(std::to_string(static_cast<float>(cpu->getData().cpuTicks) / 4).substr(0,4).c_str());
            printw("%% sys, ");
            printw(std::to_string(static_cast<float>(cpu->getData().idleTicks) / 4).substr(0,4).c_str());
            printw("%% idle.");
        } else {
        }
        printw("\n\n");

        ++it;
    }
}

void        ShellUI::display(void) {
    erase();
    box(stdscr, 0, 0);
    printShell();
    refresh();
}

ShellUI &	ShellUI::operator=(ShellUI const &rhs)
{
    static_cast<void>(rhs);
    // Code assignation here
    return *this;
}
