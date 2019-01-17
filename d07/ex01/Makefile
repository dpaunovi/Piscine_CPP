# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 11:48:00 by dpaunovi          #+#    #+#              #
#    Updated: 2019/01/17 14:15:50 by dpaunovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = iter
CC = clang++
FLAG = -Wall -Wextra -Werror
SRC = iter.cpp
OBJ = $(SRC:.cpp=.o)

YELLOW = \033[32m
CYAN = \033[36m
RED = \033[31m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAG) -c $(SRC)
	@$(CC) $^ -o $@
	@echo "$(YELLOW)$(NAME) created"

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)Files .o deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted"

re: fclean all
