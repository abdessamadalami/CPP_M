SRC =  main.cpp RPN.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = RPN

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all