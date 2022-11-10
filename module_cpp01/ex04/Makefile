# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 18:44:25 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/10 08:11:21 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp sed.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = sed
all : $(NAME)
$(NAME) :
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all