/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 18:28:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 18:40:04 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *p1;
	t_list *p2;

	p1 = *begin_list;
	while (p1)
	{
		p2 = p1->next;
		free(p1);
		p1 = p2;
	}
	*begin_list = NULL;
}
