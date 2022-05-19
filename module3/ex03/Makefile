NAME = diamond

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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
