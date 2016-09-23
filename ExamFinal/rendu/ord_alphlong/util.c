/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:33:37 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 16:01:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "util.h"

int		ft_strlen(char *str)
{
	int i;
	if (str == NULL)
		return (0);

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		len_no_space(char *str)
{
	int i;
	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

char 	*ft_strdup(char *str)
{
	int l;
	char *res;
	int i;

	l = len_no_space(str);
	res = malloc(sizeof(char) * (l + 1));
	i = 0;
	while (i < l)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	minuscule(char c)
{
		if (c >= 'A' && c <= 'Z')
					return (c + 'a' - 'A');
			return c;
}

int    ft_strcmp_alpha(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (minuscule(*s1) != minuscule(*s2))
			return (minuscule(*s1) - minuscule(*s2));
		s1++;
		s2++;
	}
	return (minuscule(*s1) - minuscule(*s2));
}
