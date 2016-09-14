/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:57:52 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 18:14:29 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	my_list_push_front(t_list **begin_list, void *data)
{
	t_list *plist;

	plist = *begin_list;
	if (plist == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		plist = ft_create_elem(data);
		plist->next = *begin_list;
		*begin_list = plist;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*p;
	int		i;

	p = NULL;
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			my_list_push_front(&p, av[i]);
			i++;
		}
	}
	return (p);
}
