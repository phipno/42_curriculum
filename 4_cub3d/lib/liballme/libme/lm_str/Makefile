# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 16:35:07 by jwillert          #+#    #+#              #
#    Updated: 2023/05/24 13:34:02 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME			=	../lm_str.a

#	Directories
INCLUDE_DIR		=	../include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../../libft/
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	Files (42 Norm)
LIBFT			=	$(LIBFT_DIR)libft_m.a
SRC_FILES		=	lm_str_check_char_duplicate.c\
					lm_str_check_char.c\
					lm_str_check_needle.c\
					lm_str_check_set_duplicate.c\
					lm_str_check_set.c\
					lm_str_check_viable_algebraic_signs.c\
					lm_str_check_viable_end.c\
					lm_str_check_viable_set.c\
					lm_str_cmp.c\
					lm_str_count_needle_appended.c\
					lm_str_duplicate_set.c\
					lm_str_get_empty.c\
					lm_str_join_delimiter.c\
					lm_str_reverse.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))

#	General Rules
CC				=	cc
DEBUG			=	$(shell echo $$DEBUG_FLAG)
CFLAGS			=	-Wall -Wextra -Werror $(DEBUG)
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBFT_DIR)include
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:				%.c
						$(CC_OBJ)

#	General Targets
.PHONY:				all clean fclean re list

all:				$(NAME)
$(NAME):			$(LIBFT) $(OBJ_FILES)
						$(LIB_CREATE) $(OBJ)
$(LIBFT):
					$(MAKE) mandatory -C $(LIBFT_DIR)
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
						@ar -t $(NAME) | grep lm | sort -g
						@echo
