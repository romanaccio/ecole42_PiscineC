/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:20:48 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 14:11:31 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	res = malloc(sizeof(int) * (length));
	if (res != NULL)
	{
		i = 0;
		while (i < length)
		{
			res[i] = f(tab[i]);
			i++;
		}
	}
	return (res);
}
