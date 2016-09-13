#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[255];
	char *res;

	src = "Antoine";
	printf("src=%s; dest avant appel ft_strcpy=%s\n", src, dest);
	res = ft_strcpy(dest, src);
	printf("src=%s; dest apres appel=%s\n", src, dest);

	src = "T";
	printf("src=%s; dest avant appel ft_strcpy=%s\n", src, dest);
	res = ft_strcpy(dest, src);
	printf("src=%s; dest apres appel=%s\n", src, dest);

	src = "";
	printf("src=%s; dest avant appel ft_strcpy=%s\n", src, dest);
	res = ft_strcpy(dest, src);
	printf("src=%s; dest apres appel=%s\n", src, dest);

	res = strcpy(dest, src);
}
