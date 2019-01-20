# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 11:48:00 by dpaunovi          #+#    #+#              #
#    Updated: 2019/01/20 23:13:07 by dpaunovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = ft_gkrellm
CC = clang++
FLAG = -Wall -Wextra -Werror
SRC = 	main.cpp \
		Hostname.cpp \
		Username.cpp \
		Manager.cpp \
		Date.cpp \
		OSinfo.cpp \
		CPUinfo.cpp \
		RAMinfo.cpp \
		Network.cpp \
		ShellUI.cpp \
		GraphUI.cpp \

OBJ = $(SRC:.cpp=.o)

YELLOW = \033[32m
CYAN = \033[36m
RED = \033[31m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAG) -c $(SRC)
	@$(CC) $^ -o $@ -lncurses
	@echo "$(YELLOW)$(NAME) created"
	@rm -f $(OBJ)
	@echo "$(CYAN)Files .o deleted"

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)Files .o deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted"

re: fclean all
