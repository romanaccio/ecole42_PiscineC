/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/12 19:41:21 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_TAB 10

#include "ft_is_sort.h"
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

int		test(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int tab[SIZE_TAB] = { -1, 2, 1, 4, 5, 6, 7, 8, 9, 10};
	int i;

	i = 0;
	ft_putstr("Contenu du tableau :\n");
	while (i < SIZE_TAB)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	if (ft_is_sort(tab, SIZE_TAB, &test))
		ft_putstr("Le tableau est trie\n");
	else
		ft_putstr("Le tableau n est pas trie\n");
	return (0);
}
