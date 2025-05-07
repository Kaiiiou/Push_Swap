# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarti <amarti@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 07:58:30 by amarti            #+#    #+#              #
#    Updated: 2025/05/07 16:31:16 by amarti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g $(INCLUDES)
RM		=	rm -f
CLONE	=	git clone

libft_url = git@github.com:Kaiiiou/42-libft.git

# === LIBFT ===
libft		=	libft
LIBFT	=	$(libft)/libft.a

# === INCLUDES ===
INCLUDES = -I includes -I $(libft)

# === SOURCES ===
SRC		=	main.c \
			instructions/swap.c \
			instructions/push.c \
			instructions/rotate.c \
			instructions/r_rotate.c \
			Parsing/parsing.c \
			Parsing/parse_args.c \
			utilitaires/f_utils.c \
			utilitaires/f_utils1.c \
			utilitaires/f_utils2.c \

OBJ		=	$(SRC:.c=.o)

# === RULES ===

all: $(NAME)

$(NAME): $(libft) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(libft):
	$(CLONE) $(libft_url) libft
	$(MAKE) -C $(libft)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(RM) -r $(libft)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re