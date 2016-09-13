#include <stdio.h>
#include "ft_recursive_factorial.c"

int		main(void)
{
	int nb;
	int result;

	nb=-69;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	// au dela de 16, on depasse la taille d un entier ; il faut renvoyer 0
	nb=17;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	nb=0;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	nb=1;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);

	nb=4;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);
	
	
	nb=12;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);
	
	nb=16;
	result = ft_recursive_factorial(nb);
	printf("La factorielle de %d est %d\n", nb, result);
}
