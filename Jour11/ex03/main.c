/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 12:40:48 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 17:16:12 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		ft_putchar(*(str + i));
		i++;
	}
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

void	print_list(t_list *list)
{
	ft_putstr("print_list : Nbre d elements dans la list = ");
	ft_putnbr(ft_list_size(list));
	ft_putchar('\n');
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list;
	t_list *list1;
	t_list *list2;

	list = NULL;
	print_list(list);
	list = ft_create_elem("toto\n");
	list1 = ft_create_elem("tata\n");
	list1->next = list;
	list2 = ft_create_elem("tutu\n");
	list2->next = list1;
	print_list(list2);
	ft_putchar('\n');
	ft_list_push_back(&list2, "ajout fin de liste\n");
	print_list(list2);
	ft_putchar('\n');
	ft_list_push_front(&list2, "ajout debut de liste\n");
	print_list(list2);
	ft_putchar('\n');
	return (0);
}
