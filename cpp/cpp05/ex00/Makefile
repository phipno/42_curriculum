# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 19:04:28 by pnolte            #+#    #+#              #
#    Updated: 2023/07/03 13:35:45 by pnolte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~. VARS .~"~._.~"~.__.~"~._.~"~._.~"~._.~"~.#

NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp

OBJS = $(SRC:.cpp=.o)

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

DEPS = Bureaucrat.hpp

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
