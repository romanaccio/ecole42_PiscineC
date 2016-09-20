/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 18:39:45 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/17 14:31:30 by ajouanna         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*(s1 + i) != 0) && (*(s2 + i) != 0) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

int	ft_strcmp_void(void *s1, void *s2)
{
	return (ft_strcmp((void *)s1, (void *)s2));
}

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
	t_btree *p1;

	p1 = NULL;
	btree_insert_data(&p1, "aa", &ft_strcmp_void);
	btree_insert_data(&p1, "ab", &ft_strcmp_void);
	btree_insert_data(&p1, "bb", &ft_strcmp_void);
	btree_insert_data(&p1, "cc", &ft_strcmp_void);
	btree_insert_data(&p1, "ca", &ft_strcmp_void);
	btree_insert_data(&p1, "ba", &ft_strcmp_void);
	btree_insert_data(&p1, "ZM", &ft_strcmp_void);
	btree_insert_data(&p1, "ZZ", &ft_strcmp_void);
	btree_insert_data(&p1, "ZA", &ft_strcmp_void);
	btree_insert_data(&p1, "ZB", &ft_strcmp_void);
	btree_insert_data(&p1, "ZC", &ft_strcmp_void);
	btree_insert_data(&p1, "ZD", &ft_strcmp_void);
	btree_apply_infix(p1, &ft_putstr_void);
	ft_putchar('\n');
	if (btree_search_item(p1, "cc", &ft_strcmp_void))
		ft_putstr("chaine cc trouvee !\n");
	else
		ft_putstr("chaine cc non trouvee\n");
	if (btree_search_item(p1, "zz", &ft_strcmp_void))
		ft_putstr("chaine zz trouvee !\n");
	else
		ft_putstr("chaine zz non trouvee\n");
	if (btree_search_item(p1, "ba", &ft_strcmp_void))
		ft_putstr("chaine ba trouvee !\n");
	else
		ft_putstr("chaine ba non trouvee\n");
	if (btree_search_item(p1, "ZA", &ft_strcmp_void))
		ft_putstr("chaine ZA trouvee !\n");
	else
		ft_putstr("chaine ZA non trouvee\n");
	ft_putstr("Taille de la plus grande branche : ");
	ft_putnbr(btree_level_count(p1));
	ft_putchar('\n');
}
