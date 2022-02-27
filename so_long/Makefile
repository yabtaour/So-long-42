# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 20:08:23 by yabtaour          #+#    #+#              #
#    Updated: 2022/02/26 20:08:29 by yabtaour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

MLX = -lmlx -framework OpenGL -framework AppKit

SRC = check_empty_line.c check_map.c check_name.c\
		ft_close.c ft_errors.c ft_errors2.c ft_move.c\
		ft_mouvement.c ft_put_image.c main.c so_long.c\
		ft_calloc.c ft_split.c\
		ft_strlen.c get_next_line_utils.c\
		get_next_line.c ft_printf.c ft_putchar.c\
		ft_putnbr_u.c ft_putnbr.c\
		ft_putstr.c ft_strrev.c\
		ft_to_hex_low.c ft_to_hex_up.c\
		ft_to_hex_pointer.c

OBJS = ${SRC:.c=.o}

CC = cc -Wall -Werror -Wextra

%.o: %.c so_long.h 
	$(CC) -o $@ -c $<

all: ${NAME}

$(NAME): $(OBJS)
	cc $(OBJS) $(MLX) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf ${NAME}

re: fclean all