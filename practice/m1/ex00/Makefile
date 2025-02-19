# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 22:35:30 by taebkim           #+#    #+#              #
#    Updated: 2025/02/17 22:40:39 by taebkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

C++ = clang++
# C++ = g++

OBJ_DIR = ./obj

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(C++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(C++) $(CPPFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f -r $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
