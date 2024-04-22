NAME = fdf
CC = gcc
CFLAGS	= -Wall -Werror -Wextra -Wunreachable-code -Ofast
LIBMLX = ./MLX42
HEADERS = -I ./include -I $(LIBMLX)/include -I $(LIBFT)
LIBS = -I include -lglfw -L "/Users/$(USER)/.brew/opt/glfw/lib/" $(LIBMLX)/libmlx42.a $(LIBFT)/libft.a
LIBNAME = ft
LIBFT = ./libft
SRCS	= src/main.c src/init.c src/stuff_with_color.c src/mlx_magic.c src/perspectives.c src/draw.c src/utils.c
OBJS	= $(SRCS:.c=.o)

all: libft libmlx $(NAME)

libft:
	make -C $(LIBFT)
	
libmlx:
	make -C $(LIBMLX)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $< $(HEADERS)

$(NAME): $(OBJS) libft
	gcc $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

clean:
	rm -f $(OBJS)
	make -C ./libft clean
	make -C $(LIBMLX) clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean
	make -C $(LIBMLX) fclean

re: fclean all

.PHONY: all, clean, fclean, re, libft