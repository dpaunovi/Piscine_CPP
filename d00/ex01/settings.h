#ifndef SETTINGS_H
# define SETTINGS_H

#include <iostream>
#include "Contact.h"


void	clear(void);
void	print(int, std::string);
void	print_space(int);
int		add_contact(Contact *);
int		infos_contact(Contact *, int);

#endif
