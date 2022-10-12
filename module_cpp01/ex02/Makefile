# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:16:23 by ael-oual          #+#    #+#              #
#    Updated: 2022/10/03 12:09:54 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = brain
all : $(NAME)
$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all