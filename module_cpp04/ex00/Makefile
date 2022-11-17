# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 12:33:58 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/16 14:56:31 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Polymorphism
all : $(NAME)
$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	~/clean
	rm -f $(NAME)
fclean :
	~/clean
	rm -f $(NAME)
re : fclean all