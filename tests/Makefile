NAME	= project_tests

HEADER	= $(shell ls . unity | grep .h$)
SRCS	= $(shell ls . unity | grep .c$)

PROJECT		= $(shell find ../objects -type f | grep .o$ | grep -v push_swap)

LIBFT_PATH	= ../libraries/libft
PRINTF_PATH	= ../libraries/printf
LIBFT 	= $(LIBFT_PATH)/libft.a
PRINTF	= $(PRINTF_PATH)/libftprintf.a

OBJ_DIR	= ./objects
OBJS	= $(SRCS:%.c=$(OBJ_DIR)/%.o) $(PROJECT)

CFLAGS	= -Wall -Wextra -g3
IFLAGS	= -I. -Iunity -I../includes -I$(LIBFT_PATH) -I$(PRINTF_PATH)
LDFLAGS = -L$(LIBFT_PATH) -lft -L$(PRINTF_PATH) -lftprintf


VPATH	= unity

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re:  fclean all

$(NAME): $(OBJS) $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

$(OBJ_DIR)/%.o: %.c $(HEADER) Makefile | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY:	all clean fclean re run
