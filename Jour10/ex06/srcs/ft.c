/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:30:56 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 12:21:27 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || \
			(str[i] == '\v') || (str[i] == '\n') ||\
			(str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while ((str[i] != 0) && (str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		ft_putchar(*(str + i));
		i++;
	}
}
