#include <unistd.h>

int	main(void)
{
	char *ptr;

	ptr = "Hello World!\n";
	write(1, ptr, 13);
}
