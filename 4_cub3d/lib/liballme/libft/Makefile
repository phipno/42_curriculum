# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 08:51:38 by jwillert          #+#    #+#              #
#    Updated: 2023/05/24 00:22:34 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library name
NAME				=	libft.a
MANDATORY_NAME		=	libft_m.a
BONUS_NAME			=	libft_b.a

#	Directories
INCLUDE_DIR			=	./include/
MANDATORY_DIR		=	./src_mandatory/
BONUS_DIR			=	./src_bonus/
OBJ_DIR				=	./obj/
VPATH				=	$(MANDATORY_DIR):$(BONUS_DIR):$(OBJ_DIR)

#	Files (42-Norm)
MANDATORY_SRC_FILES	=	ft_isalpha.c\
						ft_isdigit.c\
						ft_isalnum.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strrchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_split.c\
						ft_itoa.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c
BONUS_SRC_FILES		=	ft_lstnew.c\
						ft_lstadd_front.c\
						ft_lstsize.c\
						ft_lstlast.c\
						ft_lstadd_back.c\
						ft_lstdelone.c\
						ft_lstclear.c\
						ft_lstiter.c\
						ft_lstmap.c
MANDATORY_OBJ_FILES	=	$(MANDATORY_SRC_FILES:.c=.o)
BONUS_OBJ_FILES		=	$(BONUS_SRC_FILES:.c=.o)
MANDATORY_SRC		=	$(addprefix $(MANDATORY_DIR),$(MANDATORY_SRC_FILES))
BONUS_SRC			=	$(addprefix $(BONUS_DIR),$(BONUS_SRC_FILES))
MANDATORY_OBJ		=	$(addprefix $(OBJ_DIR),$(MANDATORY_OBJ_FILES))
BONUS_OBJ			=	$(addprefix $(OBJ_DIR),$(BONUS_OBJ_FILES))

#	General Rules
CC					=	cc
DEBUG				=	$(shell echo $$DEBUG_FLAG)
CFLAGS				=	-Wall -Wextra -Werror $(DEBUG)
INCLUDE				=	-I $(INCLUDE_DIR)
CC_OBJ				=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE			=	ar -crs
REMOVE				=	rm -f


#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:					%.c
							$(CC_OBJ)

#	General Targets
.PHONY:					all clean fclean re list
all:					$(NAME)
$(NAME):				$(MANDATORY_OBJ_FILES)
							$(LIB_CREATE) $(NAME) $(MANDATORY_OBJ)
clean:
							$(REMOVE) $(MANDATORY_OBJ) $(BONUS_OBJ)
fclean:					clean
							$(REMOVE) $(NAME)
							$(REMOVE) $(MANDATORY_NAME)
							$(REMOVE) $(BONUS_NAME)
re:						fclean
							$(MAKE)
list:
						@echo
						@echo "Library <$(NAME)> is containing the following \
						functions:"
						@ar -t $(NAME) | grep ft | sort -g
						@echo

#	Mandatory Targets
.PHONY:					mandatory mandatory_clean mandatory_fclean \
						mandarory_re mandatory_list
mandatory:				$(MANDATORY_NAME)
$(MANDATORY_NAME):		$(MANDATORY_OBJ_FILES)
							$(LIB_CREATE) $(MANDATORY_NAME) $(MANDATORY_OBJ)
mandatory_clean:
							$(REMOVE) $(MANDATORY_OBJ)
mandatory_fclean:		mandatory_clean
							$(REMOVE) $(MANDATORY_NAME)
mandarory_re:			mandarory_re
							$(MAKE) mandatory
mandatory_list:
						@echo
						@echo "Library <$(MANDATORY_NAME)> is containing the \
						following functions:"
						@ar -t $(MANDATORY_NAME) | grep ft | sort -g
						@echo

#	Bonus Targets
.PHONY:					bonus bonus_clean bonus_fclean bonus_re bonus_list
bonus:					$(BONUS_NAME)
$(BONUS_NAME):			$(BONUS_OBJ_FILES)
							$(LIB_CREATE) $(BONUS_NAME) $(BONUS_OBJ)
bonus_clean:
						$(REMOVE) $(BONUS_OBJ)
bonus_fclean: 			bonus_clean
						$(REMOVE) $(BONUS_NAME)
bonus_re:				bonus_fclean
						$(MAKE) bonus
bonus_list:
						@echo
						@echo "Library <$(BONUS_NAME)> is containing the \
						following functions:"
						@ar -t $(BONUS_NAME) | grep ft | sort -g
						@echo
