/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:49:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/22 14:45:36 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		len(char *str)
{
	int res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

char	*add_char(char c, char *str)
{
	int		l;
	int		i;
	char	*res;

	l = len(str);
	res = malloc(sizeof(char) * (l + 2));
	if (res == NULL)
		return (NULL);
	i = 0;
	res[i] = c;
	i++;
	while (i < (l + 1))
	{
		res[i] = str[i - 1];
		i++;
	}
	res[i] = 0;
	free(str);
	return (res);
}

char	char_base(char c, int base)
{
	if (base <= 10)
		return ('0' + c);
	else
	{
		if (c >= 0 && c <= 9)
			return (c + '0');
		if (c >= 10 && c <= (10 + (base - 11)))
			return (c - 10 + 'A');
	}
	return (0);
}

/*
 ** en entree, contient une valeur; on ajoute le caractere adequat selon base
*/

char	*add_char_base(char c, int base, char *str)
{
	int		l;
	int		i;
	char	*res;

	l = len(str);
	res = malloc(sizeof(char) * (l + 2));
	if (res == NULL)
		return (NULL);
	i = 0;
	res[i] = char_base(c, base);
	i++;
	while (i < (l + 1))
	{
		res[i] = str[i - 1];
		i++;
	}
	res[i] = 0;
	free(str);
	return (res);
}

char	*ft_itoa(int nbr)
{
	int		sign;
	int		div;
	char	*res;

	sign = 1;
	if (nbr > 0)
		nbr = -nbr;
	else
	{
		sign = -1;
	}
	div = 10;
	res = malloc(sizeof(char));
	if (res == NULL)
		return (NULL);
	*res = 0;
	while (nbr)
	{
		res = add_char('0' - nbr % 10, res);
		nbr /= 10;
	}
	if (sign == -1)
		res = add_char('-', res);
	return (res);
}

char	*ft_itoa_base(int value, int base)
{
	char *res;

	if (base < 2 || base > 16)
		return (NULL);
	if (base == 10)
		return (ft_itoa(value));
	value = (value < 0) ? -value : value;
	res = malloc(sizeof(char));
	if (res == NULL)
		return (NULL);
	*res = 0;
	while (value)
	{
		res = add_char_base(value % base, base, res);
		value /= base;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int i;
	int base;

	if (argc != 3)
		return (1);
	i = atoi(argv[1]);
	base = atoi(argv[2]);
	printf("retour de ft_itoa_base(%d,%d): %s\n",
			i, base, ft_itoa_base(i, base));
	return (0);
}
