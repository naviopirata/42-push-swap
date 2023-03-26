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

PATH_INCLUDES	= includes
PATH_SOURCES	= sources
PATH_OBJECTS	= objects
PATH_LIBRARIES	= libraries
PATH_TESTS		= tests
PATH_LIBFT		= $(PATH_LIBRARIES)/libft
PATH_PRINTF		= $(PATH_LIBRARIES)/printf

LIBFT			= $(PATH_LIBFT)/libft.a
PRINTF			= $(PATH_PRINTF)/libftprintf.a
INCLUDES		= -I$(PATH_INCLUDES) -I$(PATH_LIBFT) -I$(PATH_PRINTF)


NAME			= push_swap
SOURCE			= $(addprefix $(PATH_SOURCES)/, $(FILE_SOURCES))
FILE_HEADER		= $(PATH_INCLUDES)/push_swap.h
FILE_OBJECTS	= $(SOURCE:$(PATH_SOURCES)/%.c=$(PATH_OBJECTS)/%.o)

FILE_SOURCES	= push_swap.c del.c push.c print_node.c stack_load.c vec_load.c quick_sort_vec.c # rotate.c rotate_rev.c rotate_sametime.c rotate_rev_sametime.c swap.c swap_sametime.c 
		  

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(PATH_OBJECTS) $(FILE_OBJECTS) $(FILE_HEADER)
	$(LINKER) $(FLAG_C) $(FILE_OBJECTS) $(LIBFT) $(PRINTF) -o $@

$(LIBFT):
	@$(MAKE) -C $(PATH_LIBFT) all

$(PRINTF):
	@$(MAKE) -C $(PATH_PRINTF) all

$(PATH_OBJECTS):
	$(MAKE_DIR) $(PATH_OBJECTS)

$(PATH_OBJECTS)/%.o: $(PATH_SOURCES)/%.c $(FILE_HEADER)
	$(COMPILER) $(FLAG_C) $(INCLUDES) $< -o $@

clean:
	$(REMOVE_FORCE) $(PATH_OBJECTS)
	@$(MAKE) -C $(PATH_LIBFT) clean
	@$(MAKE) -C $(PATH_PRINTF) clean

fclean: clean
	$(REMOVE_FORCE) $(NAME)
	@$(MAKE) -C $(PATH_LIBFT) fclean
	@$(MAKE) -C $(PATH_PRINTF) fclean

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
