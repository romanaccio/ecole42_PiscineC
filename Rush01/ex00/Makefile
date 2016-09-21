# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/21 10:42:45 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-1
SRC = *.c

all : $(NAME)

$(NAME) :
	@echo "Compilation du $(NAME)"
	gcc -Wall -Wextra -Werror $(SRC)  -o $(NAME)

norm :
	@echo "verification norminette"
	norminette *.h
	norminette *.c

clean :
	/bin/rm -f  *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

test : all
	./$(NAME) "9...7...." "2...9..53" ".6..124.." "84...1.9." \
		"5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e
