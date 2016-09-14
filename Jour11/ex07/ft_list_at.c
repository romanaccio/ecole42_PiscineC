/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 10:53:00 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/14 13:22:58 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *p;

	p = begin_list;
	while (p && (nbr > 1))
	{
		if (p->next)
		{
			p = p->next;
			nbr--;
		}
		else
		{
			p = NULL;
			break ;
		}
	}
	return (p);
}
