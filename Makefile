NAME    := push_swap
CC		:= cc
CFLAGS  := -Wall -Wextra -Werror
INCLUDE	:= -I./Libft
RM      := rm -f
MAKE	:= make

# Libft Paths
LIBFT_DIR	:= Libft
LIBFT		:= $(LIBFT_DIR)/libft.a

# Main Paths
MAIN_PATH	:= main

SRCS    :=  $(MAIN_PATH)/main.c \
			$(MAIN_PATH)/core.c \
			$(MAIN_PATH)/convert.c \
			$(MAIN_PATH)/operations.c \
			$(MAIN_PATH)/print_operations.c \
			$(MAIN_PATH)/print_operations2.c \
			$(MAIN_PATH)/sort.c \
			$(MAIN_PATH)/utils_rotate.c \
			$(MAIN_PATH)/utils.c \
			$(MAIN_PATH)/utils2.c \
			$(MAIN_PATH)/utils3.c

OBJS    := $(SRCS:.c=.o)

# -----------------------------------------------------------------------------

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L$(LIBFT_DIR) -lft

$(LIBFT):
		$(MAKE) -C $(LIBFT_DIR)

# Compile objects with libft headers
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
