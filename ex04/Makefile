SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -f

NAME = file

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re