/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:24:23 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 16:42:04 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *plist;

	plist = *begin_list;
	if (plist == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (plist->next)
			plist = plist->next;
		plist->next = ft_create_elem(data);
	}
}
