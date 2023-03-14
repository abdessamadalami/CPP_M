SRC =  main.cpp BitcoinExchange.cpp
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