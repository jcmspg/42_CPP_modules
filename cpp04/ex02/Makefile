# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 20:06:46 by joamiran          #+#    #+#              #
#    Updated: 2025/07/21 17:59:43 by joamiran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02
SRCS		= main.cpp \
			  AAnimal.cpp \
			  Dog.cpp \
			  Cat.cpp \
			  Brain.cpp \
			  WrongAnimal.cpp \
			  WrongCat.cpp 
			  
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


