#include <stdio.h>
#include "ft_iterative_power.c"

int		main(void)
{
	int nb;
	int power;
	int result;

	nb=-2143;
	power=1;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=-4;
	power=9;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=-5;
	power=7;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=-6;
	power=6;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=0;
	power=0;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=944;
	power=0;
	result = ft_iterative_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);
}
