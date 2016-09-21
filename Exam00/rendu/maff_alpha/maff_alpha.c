#include <unistd.h>

int	main(void)
{
	char min;
	char maj;
	char nl;

	min = 'a';
	maj = 'B';
	nl = '\n';
	while (min <'z')
	{
		write(1, &min, 1);
		write(1, &maj, 1);
		min ++;
		min ++;
		maj++;
		maj++;
	}
	write(1, &nl, 1);
}
