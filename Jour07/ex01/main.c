/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:54:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 12:56:06 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			*ft_range(int min, int max);

void		test(int min, int max)
{
	int		*res;
	int		i;

	res = ft_range(min, max);
	printf("min=%d, max=%d\n", min, max);
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
