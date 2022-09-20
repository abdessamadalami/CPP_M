# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 08:18:06 by ael-oual          #+#    #+#              #
#    Updated: 2022/09/17 14:56:49 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp membres.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = megaphone
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re :fclean all
	