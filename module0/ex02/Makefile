NAME = account

SRC = Account.cpp test.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re

