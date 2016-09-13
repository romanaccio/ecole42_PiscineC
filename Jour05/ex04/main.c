#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *src;
	char dest[255];
	char *res;
	unsigned int n=4;

	src = "Antoine";
	printf("src=%s; dest avant appel ft_strncpy=%s\n", src, dest);
	res = ft_strncpy(dest, src, n);
	printf("src=%s; dest apres appel=%s\n", src, dest);

	src = "T";
	printf("src=%s; dest avant appel ft_strncpy=%s\n", src, dest);
	res = ft_strncpy(dest, src, n);
	printf("src=%s; dest apres appel=%s\n", src, dest);

	src = "";
	printf("src=%s; dest avant appel ft_strncpy=%s\n", src, dest);
	res = ft_strncpy(dest, src, n);
	printf("src=%s; dest apres appel=%s\n", src, dest);
}
