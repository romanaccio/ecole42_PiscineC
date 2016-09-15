# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/15 17:14:09 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRC = srcs
INC = includes
OBJ = objs
LIST_SRC = $(SRC)/tail.c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_atoi.c $(SRC)/print.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)/%.o)
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIST_SRC)
	gcc $(CFLAG) -I $(INC) $(LIST_SRC)  -o $(NAME)

clean :
	/bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)
