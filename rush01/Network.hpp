/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Network.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:32:02 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 21:40:49 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORK_HPP
#define NETWORK_HPP

#include "AMonitorModule.hpp"
#include <iostream>
#include <array>

class Network : public AMonitorModule<std::string> {
    public: 
        Network();
        Network(Network const &src); 
        ~Network(); 

        void        update();
        std::string getData(void);
        std::string execCmd(const char *cmd);

        Network	&operator=(Network const &rhs);

    private:
        std::string _data;
};

#endif
