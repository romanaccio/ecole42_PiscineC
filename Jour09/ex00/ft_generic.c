/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:40:57 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 18:57:52 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		my_putchar(str[i]);
		i++;
	}
}

void	ft_generic(void)
{
	char *str;

	str = "Tu tu tu tu ; Tu tu tu tu\n";
	my_putstr(str);
}
