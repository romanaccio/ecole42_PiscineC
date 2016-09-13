/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 19:35:44 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/01 12:23:21 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	test_ijk(int i, int j, int k, int *pnumber_found)
{
	if (((i != j) && (i != k) && (j != k)) && ((i < j) && (j < k)))
	{
		if (*pnumber_found == 1)
			printf(", ");
		printf("%d%d%d", i, j, k);
		*pnumber_found = 1;
	}
	return ;
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	int number_found;

	number_found = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				test_ijk(i, j, k, &number_found);
				k++;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
