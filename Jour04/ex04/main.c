#include <stdio.h>
#include "ft_fibonacci.c"

int		main(void)
{
	int i;
	int result;

	for (i=0; i<20; i++)
	{
		result = ft_fibonacci(i);
		printf("%d ", result);
	}
	printf("\n");

	i = -3;
	result = ft_fibonacci(i); 
	printf("%d\n", result);

	i = 25;
	result = ft_fibonacci(i); 
	printf("%d\n", result);
}
