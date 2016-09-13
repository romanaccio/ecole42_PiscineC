# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/13 12:04:01 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ./srcs
INC = ./includes

LIST_SRC = $(SRC)/main.c $(SRC)/ft_do_op.c $(SRC)/ft.c

all : 
	@echo "Compilation de $(NAME)"
	gcc -Wall -Wextra -Werror -I $(INC) $(LIST_SRC) -o $(NAME)

clean :
	/bin/rm -f $(NAME)
