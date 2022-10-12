# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 1980/01/01 01:48:04 by sultan            #+#    #+#              #
#    Updated: 2022/10/03 12:11:40 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  Weapon.cpp main.cpp  HumanA.cpp HumanB.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Weapon
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all