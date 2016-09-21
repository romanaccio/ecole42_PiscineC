/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 19:14:41 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/11 17:46:59 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include "check.h"

int		check_line(int val, int **grid, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[i][j] == val)
			return (0);
		j++;
	}
	return (1);
}

int		check_col(int val, int **grid, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][j] == val)
			return (0);
		i++;
	}
	return (1);
}

int		check_block(int val, int **grid, int i, int j)
{
	int ii;
	int jj;

	ii = i - (i % 3);
	jj = j - (j % 3);
	i = ii;
	while (i < ii + 3)
	{
		j = jj;
		while (j < jj + 3)
		{
			if (grid[i][j] == val)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		resolve_grid(int **grid, int position)
{
	int i;
	int j;
	int k;

	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grid[i][j] != 0)
		return (resolve_grid(grid, position + 1));
	k = 1;
	while (k <= 9)
	{
		if (check_line(k, grid, i) && check_col(k, grid, j) &&\
			check_block(k, grid, i, j))
		{
			grid[i][j] = k;
			if (resolve_grid(grid, position + 1))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
