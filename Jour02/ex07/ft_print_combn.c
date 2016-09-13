/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:49:08 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/01 13:27:03 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		puissance(int num)
{
	int ret;
	int i;

	ret = 1;
	i = 0;
	while (i < num)
	{
		ret *= 10;
		i++;
	}
	return (ret);
}

void	ft_print_combn(int n)
{
	int i;
	int max;

	if ((n < 1) || (n > 9))
		return ;
	max = puissance(n);
	i = 0;
	while (i < max)
	{
		printf("%02d ", i);
		i++;
	}
	printf("%d", n);
}

int		main(void)
{
	int toto;

	toto = 3;
	ft_print_combn(toto);
	printf("\n");
	return (0);
}
