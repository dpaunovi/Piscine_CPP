/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPU.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:08:09 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/19 16:54:33 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPU_HPP
#define CPU_HPP

class CPU {
    public: 
        CPU();
        CPU(CPU const &src); 
        ~CPU(); 

        CPU	&operator=(CPU const &rhs);

    private:
};

#endif
