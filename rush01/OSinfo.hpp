/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:08:39 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:08:42 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFO_HPP
#define OSINFO_HPP

class OSinfo {
    public: 
        OSinfo();
        OSinfo(OSinfo const &src); 
        ~OSinfo(); 

        OSinfo	&operator=(OSinfo const &rhs);

    private:
};

#endif
