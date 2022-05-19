NAME = animal

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror

STD	= -std=c++98

RM = rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(STD) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
