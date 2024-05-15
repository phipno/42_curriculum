# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:48:58 by jwillert          #+#    #+#              #
#    Updated: 2023/05/24 00:11:27 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME 			= 	libftprintf.a

#	Directories
INCLUDE_DIR		=	./include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../libft/
LIBME_DIR		=	../libme/
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	Files (42 Norm)
LIBFT			=	$(LIBFT_DIR)libft_m.a
CONVERT_DIR		=	$(LIBME_DIR)lm_convert/
CONVERT_LIB		=	$(CONVERT_DIR)lm_convert.a
VEC_STR_DIR		=	$(LIBME_DIR)lm_vec_str/
VEC_STR_LIB		=	$(VEC_STR_DIR)lm_vec_str.a
SRC_FILES 		= 	ft_printf_utils_nbr.c\
					ft_printf_utils_str.c\
					ft_printf.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))

#	General Rules
CC				=	cc
DEBUG			=	$(shell echo $$DEBUG_FLAG)
CFLAGS			=	-Wall -Wextra -Werror $(DEBUG)
INCLUDES		=	-I $(INCLUDE_DIR) -I $(LIBFT_DIR)include \
					-I $(LIBME_DIR)include
CC_OBJ			=	$(CC) $(INCLUDES) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:				%.c
						$(CC_OBJ)

#	General Targets
.PHONY:				all clean fclean re list

all:				$(NAME)
$(NAME):			$(LIBFT) $(CONVERT_LIB) $(VEC_STR_LIB) $(OBJ_FILES)
						$(LIB_CREATE) $(OBJ)
$(LIBFT):
						$(MAKE) mandatory -C $(LIBFT_DIR)
$(CONVERT_LIB):
						$(MAKE) -C $(CONVERT_DIR)
$(VEC_STR_LIB):
						$(MAKE) -C $(VEC_STR_DIR)
clean:
						$(REMOVE) $(OBJ)
fclean: 			clean
						$(REMOVE) $(NAME)
re:					fclean
						$(MAKE)
list:
						@echo
						@echo "Library <$(NAME)> contains:"
						@echo
						@ar -t $(NAME) | grep ft | sort -g
						@echo
