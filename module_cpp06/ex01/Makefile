# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 08:28:07 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/27 18:10:33 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  cast.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = reinterpret_cast

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	~/clean
	rm -f $(NAME)
fclean :
	~/clean
	rm -f $(NAME)
re : fclean all