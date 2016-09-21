/* faire une fonction qui renvoi comme atoi */
#include <stdlib.h>
#include <stdio.h>

char convert_char(char c, int base)
{
	if (base <= 10)
		return (c - '0');
	else
	{
		if (c >= '0' && c <= ('9'))
			return (c - '0');
		if (c >= 'a' && c <= ('a' + (base - 11)))
			return (c - 'a' + 10);
		if (c >= 'A' && c <= ('A' + (base - 11)))
			return (c - 'A' + 10);
	}
	return (0);
}

int test_char(char c, int base)
{
	if (base <= 10)
	{
		if (c >= '0' && c <= ('0' + (char)(base -1)))
			return (1);
	}
	else
	{
		if (c >= '0' && c <= ('9'))
			return (1);
		if (c >= 'a' && c <= ('a' + (base - 11)))
			return (1);
		if (c >= 'A' && c <= ('A' + (base - 11)))
			return (1);
	}
	return (0);
}
int ft_atoi_base(const char *str, int str_base)
{
	int res;
	int sign;

	if (str_base < 2 || str_base > 16)
		return (0);
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
	// jusqu a base 10, les caracteres autorises sont de 0 a base-1
	while (*str)
	{
		if ((*str >= '0') && (test_char(*str, str_base)))
		{
			res *= str_base;
			res += convert_char(*str, str_base);
			// res += *str - '0';
		}
		else
			break;
		str++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	printf("Chaine recue: %s, base recue: %s\n", argv[1], argv[2]);
	printf("retour de ft_atoi_base sur la base: %d\n", ft_atoi_base(argv[2], 10));

	printf("retour de ft_atoi_base: %d\n", ft_atoi_base(argv[1],ft_atoi_base(argv[2], 10)));
	return (0);
}
