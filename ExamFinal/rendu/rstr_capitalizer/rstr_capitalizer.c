/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:14:36 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 11:37:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
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

char	majuscule(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return c;
}

int	longueur_mot(char * str)
{
	int len;
	
	len = 0;
	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return len;
}

void	process(char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			ft_putchar(str[i]);
			i++;
		}
		else 
		{
			len = longueur_mot(str + i);
			j = 0;
			while (j < len - 1)
			{
				ft_putchar(minuscule(str[i]));
				j++;
				i++;
			}
			ft_putchar(majuscule(str[i]));
			i++;
		}
	}
	ft_putchar('\n');
}
int		main(int ac, char ** av)
{
	int i;

	if (ac == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		process(av[i]);
		i++;
	}
	return (0);
}
