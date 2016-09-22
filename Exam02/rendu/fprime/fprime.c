#include <stdlib.h>
#include <stdio.h>

void	fprime(int a, int passe_par_ici)
{
	int i;

	i=2;
	while (i <= a)
	{
		if ((a % i) == 0)
		{
			if (passe_par_ici)
				printf("*");
			printf("%d", i);
			fprime(a/i, 1);
			return ;
		}	
		i++;
	}
}

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}

	a = atoi(argv[1]);
	if (a == 1)
	{
		printf("1\n");
		return (0) ;
	}
	fprime(a, 0);
	printf("\n");
	return (0);
}
