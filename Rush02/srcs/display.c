/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:19:16 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/18 13:40:05 by cfrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
** Display *c* on standard output
*/

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Display *nb* on standard output
*/

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr((nb / 10) * -1);
		ft_putchar((nb % 10) * -1 + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

/*
** Display *str* on standard output
*/

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

/*
** Display the matching rush with the number and its size
*/

void		display_result(int number, t_size *size, int first)
{
	if (first != 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(number);
	ft_putstr("] [");
	ft_putnbr(size->x);
	ft_putstr("] [");
	ft_putnbr(size->y);
	ft_putstr("]");
}
