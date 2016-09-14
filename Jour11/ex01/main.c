/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 12:40:48 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 16:31:45 by ajouanna         ###   ########.fr       */
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

void	print_list(t_list *list)
{
	if (list == NULL)
	{
		ft_putstr("print_list : la liste est vide\n");
		return ;
	}
	ft_putstr("print_list : contenu de la liste :\n");
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
	ft_list_push_back(&list, "toto\n");
	print_list(list);
	list1 = ft_create_elem("tata\n");
	list1->next = list;
	list2 = ft_create_elem("tutu\n");
	list2->next = list1;
	print_list(list2);
	ft_putchar('\n');
	ft_list_push_back(&list2, "titi\n");
	print_list(list2);
	ft_putchar('\n');
	return (0);
}
