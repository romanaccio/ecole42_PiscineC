/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:14:36 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 14:06:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	count_alpha(char *str)
{
	int i;
	int j;
	int nbr;
	int c;
	int already_passed;

	already_passed = 0;
	i = 0;
	while (str[i])
	{
		c = minuscule(str[i]);
		if (c >= 'a' && c <= 'z')
		{	
			j = 1;
			nbr = 1;
			while (str[i + j])
			{
				if (minuscule(str[i + j]) == c)
				{
					nbr++;
					str[i + j] = '.';
				}
				j++;
			}
			if (already_passed)
			{
				printf(", ");
			}
			printf("%d%c", nbr, c);
			already_passed = 1;
		}
		i++;
	}
}

int		main(int ac, char ** av)
{
	if (ac == 2)
	{
		count_alpha(av[1]);
	}
	printf("\n");
	return (0);
}
