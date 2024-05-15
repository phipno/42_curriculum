# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 16:23:34 by jwillert          #+#    #+#              #
#    Updated: 2023/05/22 09:58:40 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME			=	../lm_lst.a

#	Directories
INCLUDE_DIR		=	../include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../../libft/
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	Files (42 Norm)
LIBFT			=	$(LIBFT_DIR)libft_m.a
SRC_FILES		=	lm_lst_add_back.c\
					lm_lst_calculate_average.c\
					lm_lst_calculate_sum.c\
					lm_lst_check_int_duplicate.c\
					lm_lst_count_iterations.c\
					lm_lst_count_nodes.c\
					lm_lst_count_streak_ascending.c\
					lm_lst_delete_node.c\
					lm_lst_fetch_value.c\
					lm_lst_find_int_biggest.c\
					lm_lst_find_int_next_biggest.c\
					lm_lst_find_int_second_smallest.c\
					lm_lst_find_int_smallest.c\
					lm_lst_find_shortest_path.c\
					lm_lst_free.c\
					lm_lst_get_by_index.c\
					lm_lst_get_by_value.c\
					lm_lst_get_duplicate.c\
					lm_lst_get_last.c\
					lm_lst_get_new.c\
					lm_lst_header_free.c\
					lm_lst_header_get_new.c\
					lm_lst_header_print_fd.c\
					lm_lst_print_fd.c\
					lm_lst_print_node_fd.c\
					lm_lst_sort_to_array.c
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
