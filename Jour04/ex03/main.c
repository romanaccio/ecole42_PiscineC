#include <stdio.h>
#include "ft_recursive_power.c"

int		main(void)
{
	int nb;
	int power;
	int result;

	nb=1987;
	power=-2507;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=0;
	power=0;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=2336;
	power=0;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=6;
	power=5;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=-5;
	power=8;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);

	nb=-3;
	power=10;
	result = ft_recursive_power(nb, power);
	printf("%d a la puissance %d = %d\n", nb, power, result);
}
