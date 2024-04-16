# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 17:51:40 by pnolte            #+#    #+#              #
#    Updated: 2023/05/02 19:15:05 by pnolte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~. VARS .~"~._.~"~.__.~"~._.~"~._.~"~._.~"~.#

NAME = sed_is_for_losers

SRC =  main.cpp autonomousReplacer.cpp

OBJS = $(SRC:.cpp=.o)

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

DEPS = autonomousReplacer.hpp

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~. RULES .~"~._.~"~.__.~"~._.~"~._.~"~._.~"~.#

all: $(NAME)

$(NAME): $(OBJS) $(DEPS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~"~._.~"~.#
