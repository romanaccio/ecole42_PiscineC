/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:54:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 15:12:17 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_ultimate_range(int **range, int min, int max);

void		test(int min, int max)
{
	int		*res;
	int		i;
	int		len;

	len = ft_ultimate_range(&res, min, max);
	printf("min=%d, max=%d, len=%d\n", min, max, len);
	i = 0;
	while (i < (max - min))
	{
		printf("res[%d]=%d\n", i, res[i]);
		i++;
	}
}

int			main(void)
{
	test(1, 10);
	test(10, 2);
	test(10, 10);
	test(10, 12);
}
