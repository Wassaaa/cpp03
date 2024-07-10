# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aklein <aklein@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 17:15:14 by aklein            #+#    #+#              #
#    Updated: 2024/07/10 22:29:03 by aklein           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap

CC					=	c++
CC_STRICT 			=	$(CC) $(CCF_STRICT)
DB_FLAGS			=	-g
OBJ_DIR				=	./obj
SRC_DIR				=	.

CCF_STRICT			=	-Wall -Wextra -Werror -g

SRCS				=	 \
						main.cpp \
						ClapTrap.cpp \
						ScavTrap.cpp \
						FragTrap.cpp \
						DiamondTrap.cpp \

OBJECTS				=	$(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

vpath %.cpp $(SRC_DIR)

################################################################################
# REQUIRED
################################################################################

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC_STRICT) $(OBJECTS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC_STRICT) -c $< -o $@

re: fclean all

################################################################################
# CLEAN
################################################################################

clean:
	rm -rf ./obj

fclean: clean
	rm -rf $(NAME)

################################################################################
# PHONY
################################################################################

.PHONY: all re clean fclean run
