/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_matrix_square.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:25:07 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/20 18:21:49 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int				insert_square(t_square *square, int x, int y, int size)
{
	int i;
	int j;

	j = y - size + 1;
	if (j < 0)
		j = 0;
	while (j <= y)
	{
		i = x - size + 1;
		if (i < 0)
			i = 0;
		while (i <= x)
		{
			square->tab[j][i] = square->full_char;
			i++;
		}
		j++;
	}
	return (1);
}

int				convert_matrix_square(t_square *square, int **tab)
{
	int i;
	int j;
	int max;
	int x_max;
	int y_max;

	x_max = 1;
	y_max = 1;
	max = tab[x_max][y_max];
	j = -1;
	while (++j < (square->line_nb + 1))
	{
		i = -1;
		while (++i < (square->col_nb + 1))
		{
			if (tab[j][i] > max)
			{
				x_max = i;
				y_max = j;
				max = tab[y_max][x_max];
			}
		}
	}
	return (insert_square(square, x_max - 1, y_max - 1, max));
}
