# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 10:34:07 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/10 08:12:28 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Harl
all : $(NAME)
$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all