/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/12 15:54:40 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_TAB 10

#include "ft_map.h"
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

int		test(int val)
{
	return (val + 10);
}

int		main(void)
{
	int tab[SIZE_TAB];
	int i;
	int *res;

	i = 0;
	while (i < SIZE_TAB)
	{
		tab[i] = i + 10;
		i++;
	}
	res = ft_map(tab, SIZE_TAB, &test);
	i = 0;
	while (i < SIZE_TAB)
	{
		ft_putstr("Valeur originale : ");
		ft_putnbr(tab[i]);
		ft_putstr(" Valeur traitee : ");
		ft_putnbr(res[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
