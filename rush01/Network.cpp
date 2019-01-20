/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Network.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:31:17 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 21:42:18 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Network.hpp"

Network::Network() {
    this->_name = "Network";
}

Network::Network(Network const &src) {
    *this = src;
}

Network::~Network() {}

Network &	Network::operator=(Network const &rhs)
{
    // Code assignation here
    static_cast<void>(rhs);
    return *this;
}

std::string Network::getData() {
    return this->_data;
}

std::string Network::execCmd(const char* cmd)
{
    std::array<char, 512> buffers;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffers.data(), buffers.size(), pipe.get()) != nullptr)
        result += buffers.data();
                                    
    if (result[result.size() - 1] == '\n')
        result[result.size() - 1] = ' ';
    return (result);
    // while (!feof(pipe))
    //     fgets(usage, 512, pipe);
    // return (std::string(usage));
}


void        Network::update( void )
{
    this->_data = &((execCmd("/usr/bin/top -l 1 | /usr/bin/grep Networks"))[10]);
}