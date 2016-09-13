#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(char *str);

int		main(void)
{
	char *str;
	int ft_result;
	int atoi_result;

	str = "42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "123456789";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);
	
	str = "+42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "-42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "     42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "     -42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);
	
	
	str = "";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "   42";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "   4 2";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "fffff";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "\t42\t";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);

	str = "--";
	ft_result = ft_atoi(str);
	atoi_result = atoi(str);
	printf("Chaine %s; ft_atoi=%d, atoi=%d\n",str, ft_result, atoi_result);
}
