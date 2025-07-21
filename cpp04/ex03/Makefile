# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 20:06:46 by joamiran          #+#    #+#              #
#    Updated: 2025/07/21 18:40:14 by joamiran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex03
SRCS		= main.cpp \
			  AMateria.cpp \
			  ICharacter.cpp \
			  Character.cpp \
			  MateriaSource.cpp \
			  Ice.cpp \
			  Cure.cpp \
			  
OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


