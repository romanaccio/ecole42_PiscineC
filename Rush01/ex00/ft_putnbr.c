/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:40:14 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/10 19:11:25 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_recursive_power(int nb, int power)
{
	int resultat;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power == 0)
		return (1);
	resultat = nb * ft_recursive_power(nb, power - 1);
	return (resultat);
}

/*
   ** pour traiter le cas de -2147483648 je passe par un unsigned int
*/

void	ft_putnbr(int nb)
{
	char			chardigit;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unb = -nb;
	}
	if (unb < 10)
	{
		chardigit = '0' + unb;
		ft_putchar(chardigit);
	}
	else
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
}
