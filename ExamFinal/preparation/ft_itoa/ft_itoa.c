/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:49:12 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/22 12:52:30 by ajouanna         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		return (1);
	i = atoi(argv[1]);
	printf("retour de ft_itoa(%d): %s\n", i, ft_itoa(i));
	return (0);
}
