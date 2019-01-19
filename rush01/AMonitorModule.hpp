/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 15:59:57 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:08:02 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMONITORMODULE_HPP
#define AMONITORMODULE_HPP

class AMonitorModule {
    public: 
        AMonitorModule();
        AMonitorModule(AMonitorModule const &src); 
        ~AMonitorModule(); 

        AMonitorModule	&operator=(AMonitorModule const &rhs);

    private:
};

#endif
