# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 10:34:07 by ael-oual          #+#    #+#              #
#    Updated: 2022/11/11 10:28:59 by ael-oual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harlFilter
all : $(NAME)
$(NAME) :(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean : clean
	rm -f $(NAME)
re : fclean all