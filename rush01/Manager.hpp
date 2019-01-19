/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:05:54 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 14:33:34 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <ncurses.h>

class Manager {
    public: 
        Manager();
        Manager(Manager const &src); 
        ~Manager(); 

        void    init();
        void    refreshData();

        Manager	&operator=(Manager const &rhs);

    private:
};

#endif