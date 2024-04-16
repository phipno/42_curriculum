# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 19:04:28 by pnolte            #+#    #+#              #
#    Updated: 2023/05/06 15:21:31 by pnolte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~. VARS .~"~._.~"~.__.~"~._.~"~._.~"~._.~"~.#

NAME = polymorphism

SRC = main.cpp animal.cpp cat.cpp dog.cpp WrongCat.cpp WrongAnimal.cpp

OBJS = $(SRC:.cpp=.o)

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

DEPS = animal.hpp dog.hpp cat.hpp WrongCat.hpp WrongAnimal.hpp

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
