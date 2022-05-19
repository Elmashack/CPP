NAME = megaphone

CPP = c++ -Wall -Wextra -Werror

SRCS = $(shell find . -name "*.cpp")

OBJ = $(SRCS:.cpp=.o)

.cpp.o:
	$(CPP) -o $@ -c $^

all: $(NAME)

$(NAME): $(OBJ)
	rm -rf $(NAME)
	$(CPP) $(OBJ) -o $(NAME)

debug:
	$(CPP) -g $(SRCS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re