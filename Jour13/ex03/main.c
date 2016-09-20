/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 18:39:45 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/16 14:12:56 by ajouanna         ###   ########.fr       */
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

void	ft_putstr_void(void *str)
{
	ft_putstr((char *)str);
}

int		main(void)
{
	t_btree *p1;
	t_btree *p2;

	p1 = btree_create_node("toto");
	if (p1)
	{
		p2 = btree_create_node("titi");
		if (p2)
			p1->left = p2;
	}
	btree_apply_prefix(p1, &ft_putstr_void);
	ft_putchar('\n');
	btree_apply_infix(p1, &ft_putstr_void);
	ft_putchar('\n');
	btree_apply_suffix(p1, &ft_putstr_void);
	ft_putchar('\n');
}
