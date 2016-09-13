#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1;
	char *s2;
	int res;

	s1 = "Antoine";
	s2 = "Antoine";
	res = ft_strcmp(s1, s2);
	printf("ft_strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);
	res = strcmp(s1, s2);
	printf("strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);

	s1 = "";
	s2 = "Antoine";
	res = ft_strcmp(s1, s2);
	printf("ft_strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);
	res = strcmp(s1, s2);
	printf("strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);

	s1 = "Antoine";
	s2 = "";
	res = ft_strcmp(s1, s2);
	printf("ft_strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);
	res = strcmp(s1, s2);
	printf("strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);

	s1 = "Antoine";
	s2 = "Beta";
	res = ft_strcmp(s1, s2);
	printf("ft_strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);
	res = strcmp(s1, s2);
	printf("strcmp : s1=%s; s2=%s; res=%d\n", s1, s2, res);
}
