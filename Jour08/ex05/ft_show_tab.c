/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 12:29:09 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/09 13:12:13 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar (char c);

void	my_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		ft_putchar(*(str + i));
		i++;
	}
}

void	my_putnbr(int nb)
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
		my_putnbr(unb / 10);
		my_putnbr(unb % 10);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str)
	{
		my_putstr(par[i].str);
		ft_putchar('\n');
		my_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
		//	my_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
