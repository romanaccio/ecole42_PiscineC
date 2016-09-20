# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/16 12:56:41 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
SRC = .
INC = .
OBJ = .
# attention : *.c est prohibe, ne pas pousser dans vogsphere !!!!!
LIST_SRC = $(SRC)/*.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJ)/%.o)
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIST_SRC)
	gcc $(CFLAG) -I $(INC) $(LIST_SRC)  -o $(NAME)

clean :
	/bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)
