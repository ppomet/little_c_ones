NAME = The_Dud
CC_FLAGS = -g3 -Wall -Werror -Wextra
SRC_DIR = srcs
HEADER_DIR = includes
OBJ_DIR = objects

SRC =	pp_arrays.c\
		pp_bar.c\
		pp_code.c\
		pp_gib.c\
		pp_hexa.c\
		pp_rand.c\
		pp_tools.c\
		the_dud.c
		
OBJ = $(SRC:.c=.o)
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))


all: $(NAME)

$(NAME):
		@echo "Creating objects"
		@gcc $(CC_FLAGS) -c $(SRCS) -I $(HEADER_DIR)
		@mkdir $(OBJ_DIR)
		@mv $(OBJ) $(OBJ_DIR)
		@echo "Compiling The_Dud"
		@gcc -o $(NAME) $(OBJS) srcs/libft.a -I $(HEADER_DIR)
		@echo "The_Dud Executable created!"

clean:
		@echo "Removing objects"
		@rm -rf $(OBJ_DIR)
		
fclean:
		@echo "Removing objects and executable"
		@rm -rf $(OBJ_DIR) $(NAME)
		
re: fclean all

cleanobj:
		@rm -rf *.o
		@echo "objects removed."