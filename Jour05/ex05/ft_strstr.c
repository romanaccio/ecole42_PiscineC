/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:58:45 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/05 20:28:03 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		lenstr(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != 0)
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	len = lenstr(to_find);
	if (len == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j])
		{
			if (j == len - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
