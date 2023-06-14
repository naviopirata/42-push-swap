LINKER			= gcc
COMPILER		= $(LINKER) -c

REMOVE			= rm
REMOVE_FORCE	= $(REMOVE) -rf
MAKE_DIR		= mkdir -p
DEBUG			= gdb -q -tui
MEMCHECK		= valgrind

FLAG_C			= -g -Wall -Wextra -Werror
FLAG_LEAK		= --leak-check=full --show-leak-kinds=all --track-origins=yes
FLAG_LEAK		+= -s

PATH_INCLUDES	= incl
PATH_SOURCES	= src
PATH_OBJECTS	= obj
PATH_LIBRARIES	= lib
PATH_TESTS		= tests
PATH_LIBFT		= $(PATH_LIBRARIES)

LIBFT			= $(PATH_LIBFT)/libft.a
INCLUDES		= -I$(PATH_INCLUDES) -I$(PATH_LIBFT)

NAME			= push_swap
SOURCE			= $(addprefix $(PATH_SOURCES)/, $(FILE_SOURCES))
FILE_HEADER		= $(PATH_INCLUDES)/push_swap.h
FILE_OBJECTS	= $(SOURCE:$(PATH_SOURCES)/%.c=$(PATH_OBJECTS)/%.o)

FILE_SOURCES	= argv_load.c  opt_push.c opt_rotate.c opt_swap.c \
		  parse_int.c push_swap.c push_swap_init.c push_swap_sort.c stack_load.c \
		  stack_sort_id.c radix_sort.c small_sort.c is_ordered.c sort_two.c \
		  sort_three.c sort_four.c sort_five.c check_int.c minor_pos.c # stack_quick_sort.c node_del.c node_print.c

all: $(NAME)

$(NAME): $(LIBFT) $(PATH_OBJECTS) $(FILE_OBJECTS) $(FILE_HEADER)
	$(LINKER) $(FLAG_C) $(FILE_OBJECTS) $(LIBFT) -o $@

$(LIBFT):
	@$(MAKE) -C $(PATH_LIBFT) all

$(PATH_OBJECTS):
	$(MAKE_DIR) $(PATH_OBJECTS)

$(PATH_OBJECTS)/%.o: $(PATH_SOURCES)/%.c $(FILE_HEADER)
	$(COMPILER) $(FLAG_C) $(INCLUDES) $< -o $@

clean:
	$(REMOVE_FORCE) $(PATH_OBJECTS)
	@$(MAKE) -C $(PATH_LIBFT) clean

fclean: clean
	$(REMOVE_FORCE) $(NAME)
	@$(MAKE) -C $(PATH_LIBFT) fclean

re: fclean all

run: all
	./$(NAME)

debug: all
	$(DEBUG) ./$(NAME)

leak:
	$(MEMCHECK) $(FLAG_LEAK) ./$(NAME)

test:
	$(MAKE) run -C $(PATH_TESTS) all

.PHONY: all fclean clean re run leak test debug
