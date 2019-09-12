NAME = fillit
RM = /bin/rm -rf
INCLUDES = sources/
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)
SRC = $(wildcard , sources/figures/*.c , sources/*.c , fillit.c)
OBJ = $(SRC:.c=.o)
all: $(OBJ) $(NAME)
$(OBJ): %.o : %.c
	gcc $(CFLAGS) -c $< -o $@
$(NAME):
	gcc $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
