/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CVector.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:12:29 by sflinois          #+#    #+#             */
/*   Updated: 2019/01/12 14:04:40 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CVECTOR_HPP
#define CVECTOR_HPP

class CVector {
    public: 
        CVector();
        CVector(int ax, int ay);
        CVector(CVector const &src); 
        ~CVector(); 

        CVector	&operator=(CVector const &rhs);

        int     x;
        int     y;
};

#endif
