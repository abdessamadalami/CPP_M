# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 08:07:08 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/12 17:13:06 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = FragTrap
all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	../../../../clean
	rm -f $(NAME)
fclean :
	../../../../clean
	rm -f $(NAME)
re : fclean all