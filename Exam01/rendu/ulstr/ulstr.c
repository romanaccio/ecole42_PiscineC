/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 18:26:10 by exam              #+#    #+#             */
/*   Updated: 2016/09/09 18:33:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putulstr(char *str)
{
	int i;
	int diff;
	char c;

	i = 0;
	diff = 'a' - 'A';
	while (str[i])
	{
		c = str[i];
		if (('a' <= c) && (c <= 'z'))
			c -= diff;
		else 
			if (('A' <= c) && (c <= 'Z'))
				c += diff;
		ft_putchar(c);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
