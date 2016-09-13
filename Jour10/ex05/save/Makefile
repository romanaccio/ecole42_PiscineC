# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/12 19:39:19 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
SRC = .
INC = ../ex00/includes
LIB = ../ex00

# attention : la norm interdit les wildcards ! A ne pas faire dans un rendu
LIST_SRC = ./*.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=%.o)

all : $(NAME)

$(NAME) : $(LIST_SRC)
	@echo "Compilation de $(NAME)"
	gcc -Wall -Wextra -Werror -L $(LIB) -l ft -I $(INC) $(LIST_SRC) -o $(NAME)

norm : $(LIST_SRC)
	@echo "verification norminette"
	norminette $(INC)/*.h
	norminette $(SRC)/*.c

clean :
	echo $(LIST_OBJ)
	# /bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
