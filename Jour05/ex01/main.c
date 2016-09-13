#include <stdio.h>
void ft_putnbr(int nb);

int		main(void)
{
	int n;

	ft_putnbr(0);
	printf("\n");

	ft_putnbr(42);
	printf("\n");

	ft_putnbr(-42);
	printf("\n");

	ft_putnbr(1234567890);
	printf("\n");
	ft_putnbr(-5555555);
	printf("\n");

	ft_putnbr(2147483647);
	printf("\n");

	n = -2147483648;
	printf("cas limite: %d\n",n);
	ft_putnbr(n);
	printf("\n");

}
