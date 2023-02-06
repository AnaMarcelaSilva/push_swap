NAME = push_swap

SRC_PATH = ./src/
OBJS_PATH = ./
SRC = ./src/push_swap.c src/utils.c src/args.c

OBJS = $(SRC:$(SRC_PATH)%.c=$(OBJS_PATH)%.o)

LIBFT = ./LIBFT/libft.a
PRINTF_LIB = ./FT_PRINTF/libftprintf.a

INC_DIR = ./include/

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	make re -C ./FT_PRINTF/
	make re -C ./LIBFT/
	cc -g $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF_LIB) -o $(NAME)

$(OBJS): $(SRC)
	cc $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf *.o
	rm -rf $(NAME)
	make fclean -C ./FT_PRINTF/
	make fclean -C ./LIBFT/

re: fclean all
