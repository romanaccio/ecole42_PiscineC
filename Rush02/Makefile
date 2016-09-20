# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/11 15:13:17 by cfrouin           #+#    #+#              #
#    Updated: 2016/09/17 18:15:57 by cfrouin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	srcs/main.c \
			srcs/ft_get_next_line.c \
			srcs/alloc.c \
			srcs/display.c \
			srcs/check_colles_0.c \
			srcs/check_colles_1.c \
			srcs/check_colles_2.c \
			srcs/check_colles_3.c \
			srcs/check_colles_4.c

OBJ		=	$(SRC:.c=.o)

NAME	=	rush-2

CFLAGS	=	-Wextra -Wall -I./includes/

all:		$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
