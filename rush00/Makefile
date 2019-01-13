# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 10:40:24 by sflinois          #+#    #+#              #
#    Updated: 2019/01/13 18:57:46 by dpaunovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SRC_PATH = ./
SRC_NAME = main.cpp CVector.cpp GameManager.cpp AGameEntity.cpp Player.cpp Missile.cpp Enemy.cpp Obstacle.cpp ft_retro.cpp
OBJ_PATH = objs

CC = clang++
CC_FLAGS = -Wall -Werror -Wextra

OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) -o $@ $(OBJ) -lncurses

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
		@mkdir $(OBJ_PATH) 2>/dev/null || true
		@$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
		@rm -fv $(OBJ)
		@rmdir $(OBJ_PATH) 2>/dev/null || true

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
