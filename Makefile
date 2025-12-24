# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/24 16:21:09 by zhenming          #+#    #+#              #
#    Updated: 2025/12/24 16:30:25 by zhenming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := push_swap
AR      := ar rcs
CC		:= cc
CFLAGS  := -Wall -Wextra -Werror
INCLUDE	:= -I./libft
RM      := rm -f
MAKE	:= make

# Libft Paths
LIBFT_DIR	:= ./libft
LIBFT		:= $(LIBFT_DIR)/libft.a

SRCS    := ft_printf.c \
			convert.c \
			convert2.c \
			convert3.c \
			utils.c \
			utils2.c \
			flag.c

OBJS    := $(SRCS:.c=.o)

# -----------------------------------------------------------------------------

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

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
