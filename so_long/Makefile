NAME = so_long
CC	= cc -Wall -Wextra -g
MLX = -lmlx -framework OpenGL -framework AppKit
SRS = *.c 
GNL = ./get_next_line/*.c
LIBFT = ./libft/*.c
all: build

build: 
	$(CC)  $(SRS) $(GNL) $(LIBFT)  $(MLX) -o $(NAME)
	./so_long map1.ber
clean:
	rm *.o ./get_next_line/*.o
fclean: clean
	rm ${NAME}

	
