int	power10(int power)
{
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 10*power10(power -1 );
	return (res);
}

int	ft_atoi(const char *str)
{
	int result;
	int len;
	int chiffre;

	len=0;
	while (*(str + len) != 0)
	{
		len ++;
	}

	result = 0;
	i=0;
	while (i < len )
	{
		result += ((*(str + i) - '0') * power10 (len -i -1));
		i++;
	}

	return (result);
}
