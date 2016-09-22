#include <stdlib.h>
#include <stdio.h>

unsigned char 	reverse_bits(unsigned char octet);

int main(int argc, char **argv)
{
	unsigned char c;

	if (argc != 2)
		return (1);
	c = (unsigned char)atoi(argv[1]);

	printf("reverse_bits(%d)=%d\n", c, reverse_bits(c));

}
