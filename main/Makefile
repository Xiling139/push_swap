NAME    := push_swap
CC		:= cc
CFLAGS  := -Wall -Wextra -Werror
# INCLUDE	:= -I./libft
RM      := rm -f
MAKE	:= make

# Libft Paths
# LIBFT_DIR	:=
# LIBFT		:= $(LIBFT_DIR)/libft.a

SRCS    :=  main.c \
			core.c \
			convert.c \
			operations.c \
			radix_sort.c \
			utils.c \
			utils2.c \
			utils3.c

OBJS    := $(SRCS:.c=.o)

# -----------------------------------------------------------------------------

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L. -lft
#	cp $(LIBFT) $(NAME)
#	$(AR) $(NAME) $(OBJS)

# $(LIBFT):
# 		$(MAKE) -C $(LIBFT_DIR)

# Compile objects with libft headers
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
#	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
#	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
