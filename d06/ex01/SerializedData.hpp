/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializedData.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:05:20 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/16 11:21:36 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZEDDATA_HPP
#define SERIALIZEDDATA_HPP

struct SerializedData {
    public: 
        SerializedData();
        SerializedData(SerializedData const &src); 
        ~SerializedData(); 

        SerializedData	&operator=(SerializedData const &rhs);

        char    s1[9];
        int     n;
        char    s2[9];

    private:
};

#endif
