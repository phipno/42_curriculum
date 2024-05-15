# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 16:55:52 by jwillert          #+#    #+#              #
#    Updated: 2023/05/17 17:16:28 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Libraries
ARRAY_STR_LIB		=	./lm_array_str.a
CONVERT_LIB			=	./lm_convert.a
INT_LIB				=	./lm_int.a
LST_LIB				=	./lm_lst.a
STR_LIB				=	./lm_str.a
UTILS_LIB			=	./lm_utils.a
VEC_STR_LIB			=	./lm_vec_str.a
ALL_LIBS			=	$(ARRAY_STR_LIB)\
						$(CONVERT_LIB)\
						$(INT_LIB)\
						$(LST_LIB)\
						$(STR_LIB)\
						$(UTILS_LIB)\
						$(VEC_STR_LIB)

#	Library Directories
ARRAY_STR_DIR		=	./lm_array_str/
CONVERT_DIR			=	./lm_convert/
INT_DIR				=	./lm_int/
LST_DIR				=	./lm_lst/
STR_DIR				=	./lm_str/
UTILS_DIR			=	./lm_utils/
VEC_STR_DIR			=	./lm_vec_str/
ALL_DIRS			=	$(ARRAY_STR_DIR)\
						$(CONVERT_DIR)\
						$(INT_DIR)\
						$(LST_DIR)\
						$(STR_DIR)\
						$(UTILS_DIR)\
						$(VEC_STR_DIR)

#	Deletes targets in case of an error
.DELETE_ON_ERROR:

#	General targets
.PHONY:				all clean fclean re
all:
						for dir in $(ALL_DIRS); do\
							$(MAKE) -C $$dir;\
							done
merge:				all
						for lib in $(ALL_LIBS); do\
							ar -x $$lib;\
							done
						rm -f "__.SYMDEF SORTED"
						rm *.a
						ar -crs libme.a *.o
						rm *.o
clean:
						for dir in $(ALL_DIRS); do\
							$(MAKE) clean -C $$dir;\
							done
fclean:
						rm -f libme.a
						for dir in $(ALL_DIRS); do\
							$(MAKE) fclean -C $$dir;\
							done