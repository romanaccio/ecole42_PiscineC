/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/12 13:55:12 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_TAB 10

#include "ft_foreach.h"
#include "ft.h"

void	ft_putnbr(int nb)
{
	char			chardigit;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	if (unb < 10)
	{
		chardigit = '0' + unb;
		ft_putchar(chardigit);
	}
	else
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
}

int		main(void)
{
	int tab[SIZE_TAB];
	int i;

	i = 0;
	while (i < SIZE_TAB)
	{
		tab[i] = i + 10;
		i++;
	}
	ft_foreach(tab, SIZE_TAB - 1, &ft_putnbr);
	ft_putchar('\n');
	return (0);
}
