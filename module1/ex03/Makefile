NAME = weapon

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror

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