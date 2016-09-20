/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bsq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 23:48:41 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 19:11:53 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

void	free_mem(t_square *square, int **tab)
{
	int j;

	j = 0;
	while (j < (square->line_nb + 1))
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	j = 0;
	while (j < square->line_nb)
	{
		free(square->tab[j]);
		j++;
	}
	free(square->tab);
	free(square);
}

/*
** Check each file and display the result
*/

int		check_bsq(t_square *square)
{
	int **tab;

	if ((tab = feed_matrix(square)) == NULL)
		return (0);
	convert_matrix_square(square, tab);
	dsp_bsq(square);
	free_mem(square, tab);
	return (1);
}
