/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphUI.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 18:10:40 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/01/20 23:13:11 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHUI_HPP
#define GRAPHUI_HPP

class GraphUI {
    public: 
        GraphUI();
        ~GraphUI(); 

        void    display();

        GraphUI	&operator=(GraphUI const &rhs);

    private:
        GraphUI(GraphUI const &src); 
};

#endif
