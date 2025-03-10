# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/02/21 14:37:52 by sramos        #+#    #+#                  #
#    Updated: 2025/03/10 10:54:03 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re