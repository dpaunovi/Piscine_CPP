/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hostname.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:09:01 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:09:03 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAME_HPP
#define HOSTNAME_HPP

class Hostname {
    public: 
        Hostname();
        Hostname(Hostname const &src); 
        ~Hostname(); 

        Hostname	&operator=(Hostname const &rhs);

    private:
};

#endif
