/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 10:46:52 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/06 16:07:55 by xcabot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	return ((\
				c == ' ' || \
				c == '\t' || \
				c == '\n' || \
				c == '\v' || \
				c == '\f' || \
				c == '\r'));
}

int		ft_isdigit(char c)
{
	return ((c >= '0' && c <= '9'));
}

int		ft_atoi(char *str)
{
	int value;
	int sign;

	sign = 1;
	value = 0;
	while (ft_isspace(*str))
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		value = 10 * value + *str - '0';
		str++;
	}
	return (value * sign);
}
