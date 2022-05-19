NAME 		=	phonebook

SRC			=	Contact.cpp \
				PhoneBook.cpp \
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	c++

RM			=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(SRC) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re