CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = test
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: compile

compile: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) \#*# *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
