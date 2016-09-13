/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:04:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 12:09:05 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_do_op.h"

void	init_tab(struct s_do_op *tab)
{
	tab[0].operation = '+';
	tab[0].f = &plus;
	tab[1].operation = '-';
	tab[1].f = &minus;
	tab[2].operation = '/';
	tab[2].f = &divide;
	tab[3].operation = '*';
	tab[3].f = &by;
	tab[4].operation = '%';
	tab[4].f = &modulo;
}

int		main(int argc, char **argv)
{
	struct s_do_op	tab[5];
	int				i;

	if (argc != 4)
		return (0);
	init_tab(tab);
	i = 0;
	while (i < 5)
	{
		if (tab[i].operation == argv[2][0])
		{
			tab[i].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
			break ;
		}
		i++;
	}
	if (i == 5)
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
