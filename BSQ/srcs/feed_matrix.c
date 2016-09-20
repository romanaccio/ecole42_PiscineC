/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feed_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:33:38 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 18:18:45 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int	min_of(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= c && b <= a)
		return (b);
	return (c);
}

int	cell_weight(int **tab, int x, int y)
{
	if (tab[y][x] == 0)
		return (0);
	else
		return (1 + min_of(tab[y][x - 1], tab[y - 1][x - 1], tab[y - 1][x]));
}

int	**feed_matrix(t_square *bsq)
{
	int **tab;
	int i;
	int j;

	if ((tab = (int **)malloc(sizeof(*tab) * (bsq->line_nb + 1))) == NULL)
		return (NULL);
	j = -1;
	while (++j < bsq->line_nb + 1)
	{
		if ((tab[j] =
				(int *)malloc(sizeof(**tab) * (bsq->col_nb + 1))) == NULL)
			return (NULL);
		tab[j][0] = 0;
		i = -1;
		while (++i < bsq->col_nb + 1)
		{
			tab[0][i] = 0;
			if (j > 0 && i > 0)
			{
				tab[j][i] = (bsq->tab[j - 1][i - 1] == bsq->obs_char) ? 0 : 1;
				tab[j][i] = cell_weight(tab, i, j);
			}
		}
	}
	return (tab);
}
