/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 18:39:45 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/16 10:53:14 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	t_btree *p;

	p = btree_create_node("toto");
	if (p)
	{
		ft_putstr(p->item);
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur sur btree_create_node\n");
}
