# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sultan <sultan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 1980/01/01 01:48:04 by sultan            #+#    #+#              #
#    Updated: 1980/01/01 01:49:15 by sultan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp Weapon.cpp Weapon.hpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Zombie
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all