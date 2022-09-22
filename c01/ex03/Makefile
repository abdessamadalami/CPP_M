# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 1980/01/01 01:48:04 by sultan            #+#    #+#              #
#    Updated: 2022/09/22 17:39:18 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  Weapon.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Weapon
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all