# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/02/21 14:37:52 by sramos        #+#    #+#                  #
#    Updated: 2025/03/20 11:19:08 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\

OBJ = $(SRC:.cpp=.o)
OBJ_DIR = build
OBJ_PATH = $(OBJ:%=$(OBJ_DIR)/%)

all: $(NAME)

$(NAME): $(OBJ_PATH)
		@c++ $(CPPFLAGS) $(OBJ_PATH) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@c++ $(CPPFLAGS) -c $< -o $@

clean:
		@rm -rf $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re