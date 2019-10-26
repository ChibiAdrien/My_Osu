##
## EPITECH PROJECT, 2019
## SYN_projTester_2018
## File description:
## Makefile
##

CFLAGS = -Wextra -Wall -Iinclude -g

TFLAGS = -lcriterion --coverage

SRC	=

NAME	=	osu

MAIN =	main.c

TEST_BINARY	=	test

TEST_FILES	=	*.gcno	\
				*.gcda	\

TEST	=	tests/tests.c

OBJ	=	$(MAIN:.c=.o)	\
		$(SRC:.c=.o)	\

all:
	$(MAKE) $(NAME)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)
			rm -f $(TEST_FILES)
			rm -f $(TEST_BINARY)

re: fclean all

tests_run: all
			gcc -o $(TEST_BINARY) $(TEST) $(SRC) $(CFLAGS) $(TFLAGS)
			@./$(TEST_BINARY)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS)
