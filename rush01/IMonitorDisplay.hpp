/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:08:52 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:08:57 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
#define IMONITORDISPLAY_HPP

class IMonitorDisplay {
    public: 
        IMonitorDisplay();
        IMonitorDisplay(IMonitorDisplay const &src); 
        ~IMonitorDisplay(); 

        IMonitorDisplay	&operator=(IMonitorDisplay const &rhs);

    private:
};

#endif
