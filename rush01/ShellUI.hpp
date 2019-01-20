/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShellUI.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:19:48 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 19:54:46 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHELLUI_HPP
#define SHELLUI_HPP

#include "Manager.hpp"
#include <ncurses.h>

class ShellUI {
    public: 
        ShellUI();
        ~ShellUI();

        void    init(void);
        void    printName(std::string name);
        void    printShell();
        void    display();

        ShellUI	&operator=(ShellUI const &rhs);

    private:
        ShellUI(ShellUI const &src);
};

#endif