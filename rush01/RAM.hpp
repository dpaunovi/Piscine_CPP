/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAM.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:08:32 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:08:34 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAM_HPP
#define RAM_HPP

class RAM {
    public: 
        RAM();
        RAM(RAM const &src); 
        ~RAM(); 

        RAM	&operator=(RAM const &rhs);

    private:
};

#endif
