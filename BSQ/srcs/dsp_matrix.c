/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsp_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:15:19 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 17:19:09 by xcabot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int		dsp_matrix(t_square *bsq, int **a)
{
	int ret;
	int i;
	int j;

	ret = 0;
	j = 0;
	while (j < bsq->line_nb + 1)
	{
		i = 0;
		while (i < bsq->col_nb + 1)
		{
			ft_putnbr(a[j][i]);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	ft_putchar('\n');
	return (ret);
}
