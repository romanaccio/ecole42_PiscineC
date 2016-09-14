/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:24:23 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 17:00:10 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
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
