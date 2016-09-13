#include <stdio.h>
#include "ft_iterative_factorial.c"

int		main(void)
{
	int nb;
	int result;
	
	nb=0;
	result = ft_iterative_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	nb=1;
	result = ft_iterative_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	nb=4;
	result = ft_iterative_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);
	
	
	nb=12;
	result = ft_iterative_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);
	
	nb=-3;
	result = ft_iterative_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

}
