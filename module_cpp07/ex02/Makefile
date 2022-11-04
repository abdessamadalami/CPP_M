# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 15:13:26 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/04 15:13:41 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  main.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = template_array

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all