CC=c++
CFLAGS= -std=c++98 -Wall -Werror -Wextra

OBJ=ClapTrap.o ScavTrap.o FragTrap.o main.o
NAME=FragTrap

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all