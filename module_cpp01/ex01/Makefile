# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:16:23 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/11 10:10:41 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp  Zombie.cpp zombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Zombie
all : $(NAME)
$(NAME) :
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all