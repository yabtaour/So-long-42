NAME = so_long
CC	= cc -Wall -Wextra
MLX = -lmlx -framework OpenGL -framework AppKit
SRS = *.c 
GNL = ./get_next_line/*.c
all: build

build: 
	$(CC)  $(SRS) $(GNL)  $(MLX) -o $(NAME)
	clear
	./so_long map1.ber
clean:
	rm *.o ./get_next_line/*.o
fclean: clean
	rm ${NAME}

	
