# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msefako <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/02 14:56:42 by msefako           #+#    #+#              #
#    Updated: 2018/08/26 07:02:32 by msefako          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mk.filler
SOURCES =	sources/algorithm.c \
			 sources/main.c \
			 sources/read_map.c \
			 sources/read_piece.c \
			 sources/read_token.c\
			 sources/utils.c
INCLUDES = libft/libft.a

$(NAME):
	make -C libft
	gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o $(NAME)

all: $(NAME)

clean:
	make -C libft clean
	rm -f $(NAME)

fclean: clean
	rm -rf libft/$(NAME)
	rm -f $(NAME)

re: fclean all
