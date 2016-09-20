/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:33:40 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 18:19:28 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int	is_valid(t_square *bsq)
{
	int		i;
	int		j;

	j = 0;
	while (j < bsq->line_nb && bsq->tab[j])
	{
		i = 0;
		while (bsq->tab[j][i] != '\0')
		{
			if ((bsq->tab[j][i] != bsq->empty_char) &&
				(bsq->tab[j][i] != bsq->obs_char))
				return (0);
			i++;
		}
		if (j == 0)
			bsq->col_nb = i;
		else if (bsq->col_nb != i)
			return (0);
		j++;
	}
	if (j != bsq->line_nb)
	{
		return (0);
	}
	return (1);
}
