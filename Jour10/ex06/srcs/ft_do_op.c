/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:51:29 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 12:19:20 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void		minus(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void		by(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void		divide(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
	ft_putchar('\n');
}

void		modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
	ft_putchar('\n');
}
