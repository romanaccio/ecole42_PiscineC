/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 15:31:42 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 19:28:30 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	concat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
}

int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*res;
	int		len_string;

	i = 1;
	len_string = 0;
	while (i < argc)
	{
		len_string += my_strlen(argv[i]) + 1;
		i++;
	}
	res = (char *)malloc(sizeof(char) * (len_string + 1));
	i = 1;
	while (i < argc)
	{
		concat(res, argv[i]);
		i++;
	}
	res[len_string - 1] = 0;
	return (res);
}
