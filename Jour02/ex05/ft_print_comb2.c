/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 10:25:13 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/01 12:28:44 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_comb2(void)
{
	int i;
	int j;
	int number_found;

	number_found = 0;
	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if ((i != j) && (i < j))
			{
				if (number_found == 1)
				{
					printf(", ");
				}
				printf("%02d %02d", i, j);
				number_found = 1;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
