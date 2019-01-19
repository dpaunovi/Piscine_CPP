/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 15:18:40 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:09:35 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

class IMonitorModule {
    public: 
        IMonitorModule();
        IMonitorModule(IMonitorModule const &src); 
        ~IMonitorModule(); 

        virtual void        update(void) = 0;

        IMonitorModule	&operator=(IMonitorModule const &rhs);

    private:
};

#endif
