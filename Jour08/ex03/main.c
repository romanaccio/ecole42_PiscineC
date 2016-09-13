#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = -100;
	j = ABS(i);
	printf("i=%d, abs(i)=%d\n",i, j);
	return (0);
}
