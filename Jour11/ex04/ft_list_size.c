/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:05:08 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 17:17:06 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	if (begin_list != NULL)
	{
		counter += 1;
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			counter++;
		}
	}
	return (counter);
}
