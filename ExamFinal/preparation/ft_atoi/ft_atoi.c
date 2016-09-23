/* faire une fonction qui renvoi comme atoi */
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int res;
	int sign;

	// eliminer les chars invisibles 
	while (*str && (*str < 33))
	{
		str++;
	}
	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;	
	}
	if (*str == '+')
	{
		str++;	
	}
	while ((*str) && (*str >= '0') && (*str <= '9'))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("Chaine recue: %s\n", argv[1]);
	printf("retour de atoi: %d\n", atoi(argv[1]));
	printf("retour de ft_atoi: %d\n", atoi(argv[1]));
	return (0);
}
