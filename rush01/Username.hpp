/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Username.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 12:51:34 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 12:51:54 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERNAME_HPP
#define USERNAME_HPP

#include "AMonitorModule.hpp"
#include <iostream>

class Username : public AMonitorModule<std::string> {
    public: 
        Username();
        ~Username();

        void        update(void);
        std::string getData(void);

        Username	&operator=(Username const &rhs);

    private:
        std::string _data;
        Username(Username const &src);

};

#endif