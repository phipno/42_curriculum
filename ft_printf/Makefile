LIBFT = ./libft/libft.a
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
CFILES = ft_printf.c ft_hexa_ptr.c ft_hexa_conv.c ft_itoa_count.c ft_u_itoa_count.c
OFILES = $(CFILES:.c=.o)


$(NAME): $(OFILES)
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) -c $(FLAGS) $(CFILES)
	ar -rcs $(NAME) $(OFILES)

all : $(NAME)

clean:
	make clean -C ./libft
	rm -f $(wildcard *.o) $(wildcard *.out)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME) $(wildcard *.gch)

re: fclean all
