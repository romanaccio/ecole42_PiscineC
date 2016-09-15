# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/15 10:52:54 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = srcs
INC = includes
OBJ = objs
LIST_SRC = $(SRC)/cat.c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)/%.o)
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIST_SRC)
	gcc $(CFLAG) -I $(INC) $(LIST_SRC)  -o $(NAME)

clean :
	/bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)
