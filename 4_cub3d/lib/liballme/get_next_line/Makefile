# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:33:59 by jwillert          #+#    #+#              #
#    Updated: 2023/05/17 17:55:03 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME			=	libgnl.a

#	Directories
OBJ_DIR			=	./obj/
SRC_DIR			=	./src/
INCLUDE_DIR		=	./include/

#	Files (42 Norm)
SRC_FILES		=	get_next_line_bonus.c\
					get_next_line_utils_bonus.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	General Rules
CC				=	cc
DEBUG			=	$(shell echo $$DEBUG_FLAG)
CFLAGS			=	-Wall -Wextra -Werror $(DEBUG)
INCLUDES		=	-I $(INCLUDE_DIR)
CC_OBJ			=	$(CC) $(CFLAGS) $(INCLUDES) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f
BUFFER_SIZE		=	10000

#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:				%.c
						$(CC_OBJ) -D BUFFER_SIZE=$(BUFFER_SIZE)

#	General Targets
.PHONY:				all clean fclean re list

all:				$(NAME)
$(NAME):			$(OBJ_FILES)
						$(LIB_CREATE) $(OBJ)
clean:
						$(REMOVE) $(OBJ)
fclean:				clean
						$(REMOVE) $(NAME)
						$(REMOVE) a.out
re:					fclean
						$(MAKE)
list:
						@echo
						@echo "Library <$(NAME)> is containing the \
						following functions:"
						@ar -t $(NAME) | grep get | sort -g
						@echo
test:				$(NAME)
						$(CC) $(CFLAGS) $(INCLUDE) main.c $(NAME)
