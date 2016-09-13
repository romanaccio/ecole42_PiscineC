#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

int main()
{
	char *str;
	char *res;
	char *to_find;

	str = "Hello World";
	to_find = "lo";

	res = ft_strstr(str, to_find);	
	printf("str=%s, to_find=%s, res=%s\n",str, to_find, res);
}
