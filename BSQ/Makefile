# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xcabot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:04:22 by xcabot            #+#    #+#              #
#    Updated: 2016/09/20 18:26:42 by ajouanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = bsq

SRC_PATH = srcs
INC_PATH = includes
OBJ_PATH = objs

SRC =\
alloc.c\
convert_matrix_square.c\
check_bsq.c\
dsp_bsq.c\
dsp_error.c\
dsp_matrix.c\
feed_matrix.c\
ft_atoi.c\
ft_get_next_line.c\
ft_putchar.c\
ft_putnbr.c\
ft_putstr.c\
ft_strlen.c\
get_tab.c\
is_valid.c\
main.c




OBJ = $(SRC:.c=.o)

SRC_FILES = $(addprefix $(SRC_PATH)/, $(SRC))
OBJ_FILES = $(OBJ)
fOBJ_FILE = $(addprefix $(OBJ_PATH)/, $(OBJ))

CC = /usr/bin/gcc
# penser a supprimer -DDEBUG
CFLAGS = -c -Wall -Wextra -Werror 
# CFLAGS = -c -Wall -Wextra -Werror -DDEBUG

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) $(CFLAGS) -I $(INC_PATH) $(SRC_FILES) 

clean:
	/bin/rm -f $(OBJ_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	@echo ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Passage par stdin"
	perl ./annexe/make_bsq.pl   20  10  8    |./$(NAME)
	@echo ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Passage par fichiers"
	./$(NAME) \
annexe/bsq_20_10_1.txt \
annexe/bsq_20_10_5.txt \
annexe/bsq_20_10_9.txt \
annexe/bsq_50_10_1.txt \
annexe/bsq_50_10_5.txt \
annexe/bsq_50_10_9.txt \
annexe/bsq_50_10_1_invalid.txt 

.PHONY: all clean fclean re
