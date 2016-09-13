/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/12 18:40:03 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_TAB 10

#include "ft_count_if.h"
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

int		testa(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int		testb(char *str)
{
	if (str[0] == 'b')
		return (1);
	return (0);
}

int		main(void)
{
	char *tab[100] = {"a", "ab", "abc", "abcd", "b", "bb", "\0", "\0", "\0", "\0"};
	// char **tab;
	int i;

	i = 0;
	while (tab[i][0])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	// tab = (char **)tableau;
	ft_putstr("test1 : ");
	ft_putnbr(ft_count_if(tab, &testa));
	ft_putchar('\n');
	ft_putstr("test2 : ");
	ft_putnbr(ft_count_if(tab, &testb));
	ft_putchar('\n');
	return (0);
}
