# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:37:40 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/07 10:38:06 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  main.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = easyfind

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all