# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 17:28:39 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/12 09:26:48 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Fixed
all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
fclean : 
	../../../../clean
	rm -f $(NAME)
re : fclean all