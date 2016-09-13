/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 19:21:55 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/01 11:53:10 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		printf("N");
	}
	else
	{
		printf("P");
	}
}

int		main(void)
{
	ft_is_negative(33);
	ft_is_negative(-33);
	printf("\n");
	return (0);
}
