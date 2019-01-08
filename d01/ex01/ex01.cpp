# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex01                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/08 13:53:19 by dpaunovi          #+#    #+#              #
/*   Updated: 2019/01/08 13:55:18 by dpaunovi         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
