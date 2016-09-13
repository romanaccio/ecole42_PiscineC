all : ft_putchar.o
	gcc -Wall -Wextra -Werror ft_putchar.o main.c -o test
norm :
	norminette -R CheckForbiddenSourceHeader
ft_putchar.o :
	gcc -c ft_putchar.c
clean:
	rm *.o
