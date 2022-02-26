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

CC = cc -Wall -Werror -Wextra

MLX = -lmlx -fremework OpenGL -framework AppKit

SRC = check_empty_line.c chacke_map.c check_name.c\
		ft_close.c ft_wrrors.c ft_errors2.c ft_move.c\
		ft_mouvement.c ft_put_image.c main.c so_long.c


LIBFT = ./libft/ft_calloc.c ./libft/ft_split.c\
		./libft/ft_strlen.c

GNL = ./get_next_line/get_next_line_utils.c\
		./get_next_line/get_next_line.c

PRINTF = ./ft_printf/ft_printf.c ./ft_printf/ft_putchar.c\
			./ft_printf/ft_putnbr_u.c ./ft_printf/ft_putnbr.c\
			./ft_printf/ft_putstr.c ./ft_printf/ft_strrev.c\
			./ft_printf/ft_to_hex_low.c ./ft_printf/ft_to_hex_up.c\
			./ft_printf/ft_to_hex_pointer.c

all = build

build : so_long.h
	$(CC) $(MLX) $(SRC) $(LIBFT) $(GNL) $(PRINTF) -o ${NAME}

clean :
	rm -rf 
