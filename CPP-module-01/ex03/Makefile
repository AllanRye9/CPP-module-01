# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 21:12:29 by oallan            #+#    #+#              #
#    Updated: 2024/09/18 21:12:33 by oallan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
CC = c++ -Wall -Wextra -Werror -std=c++98
SRC = src/Weapon.cpp src/HumanB.cpp src/main.cpp src/HumanA.cpp
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)
all: $(NAME)
clean: 
	rm -f $(NAME)
fclean: clean
re: fclean all
./PHONY: clean fclean all re
