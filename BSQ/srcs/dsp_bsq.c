/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsp_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:15:19 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 18:14:26 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int	dsp_bsq(t_square *square)
{
	int ret;
	int i;
	int j;

	ret = 0;
	j = 0;
	while (square->tab[j] != NULL)
	{
		i = 0;
		while (square->tab[j][i] != '\0')
		{
			ft_putchar(square->tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (ret);
}
