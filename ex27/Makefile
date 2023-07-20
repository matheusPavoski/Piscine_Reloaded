# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:09:29 by mmaschio          #+#    #+#              #
#    Updated: 2023/07/20 12:17:35 by mmaschio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
SRC = ./src/display_file.c
HD = ./inc/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean: 
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: 
	fclean all