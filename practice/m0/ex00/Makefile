# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taebkim <taebkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 21:28:02 by taebkim           #+#    #+#              #
#    Updated: 2025/02/15 22:34:17 by taebkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

C++ = clang++
# C++ = g++

OBJ_DIR = ./obj

SRCS = megaphone.cpp

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
