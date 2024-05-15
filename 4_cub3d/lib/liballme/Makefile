# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 19:08:46 by jwillert          #+#    #+#              #
#    Updated: 2023/05/22 18:54:59 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME                     = liballme_init

FT_PRINTF_DIR            = ./ft_printf/
GET_NEXT_LINE_DIR        = ./get_next_line/
LIBFT_DIR                = ./libft/
LIBME_DIR                = ./libme/

DIR_ALL                  = $(FT_PRINTF_DIR)\
                           $(GET_NEXT_LINE_DIR)\
						   $(LIBFT_DIR)\
						   $(LIBME_DIR)
.PHONY: all

all: $(NAME)
$(NAME):
	for dir in $(DIR_ALL); do\
		$(MAKE) -C $$dir;\
		done
	touch $(NAME)
clean:
	for dir in $(DIR_ALL); do\
		$(MAKE) clean -C $$dir; \
		done
fclean:
	for dir in $(DIR_ALL); do\
		$(MAKE) fclean -C $$dir; \
		done
	rm -f $(NAME)
re: fclean
	$(MAKE)