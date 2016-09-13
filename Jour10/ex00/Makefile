# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 16:29:34 by ajouanna          #+#    #+#              #
#    Updated: 2016/09/12 17:19:52 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs
INC = includes
LIST_SRC = $(SRC)/ft_putchar.c $(SRC)/ft_swap.c $(SRC)/ft_putstr.c \
		   $(SRC)/ft_strlen.c $(SRC)/ft_strcmp.c
LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=%.o)

all : $(NAME)

$(NAME) : $(LIST_OBJ)
	ar rc $(NAME) $(LIST_OBJ)

$(LIST_OBJ) : $(LIST_SRC)
	gcc -Wall -Wextra -Werror -I $(INC) -c  $(LIST_SRC) 

clean :
	/bin/rm -f  $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
