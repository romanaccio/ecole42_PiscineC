/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/12 18:41:44 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_TAB 10

#include "ft_any.h"
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

int		test1(char * str)
{
	(void)str;
	return (1);
}

int		test2(char * str)
{
	(void)str;
	return (0);
}


int		main(void)
{
	char *tableau[100] = {"a", "ab", "abc", "abcd", "b", "bb", "\0", "\0", "\0", "\0"};
	char **tab;

	tab = (char **) tableau;
	tab[SIZE_TAB -1] =  0;
	ft_putstr("test1 : ");
	if (ft_any(tab, &test1))
		ft_putstr("succes");
	else
		ft_putstr("echec");
	ft_putchar('\n');
	ft_putstr("test2 : ");
	if (ft_any(tab, &test2))
		ft_putstr("succes");
	else
		ft_putstr("echec");
	ft_putchar('\n');
	return (0);
}
