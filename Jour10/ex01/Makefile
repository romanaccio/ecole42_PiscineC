# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/12 12:41:48 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
SRC = .
INC = .
LIST_OBJ = ft_putchar.o

all : $(NAME)

$(NAME) :
	@echo "Compilation de $(NAME)"
	gcc -Wall -Wextra -Werror -I $(INC) $(SRC)/*.c  -o $(NAME)

norm :
	@echo "verification norminette"
	norminette $(INC)/*.h
	norminette $(SRC)/*.c

clean :
	/bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
