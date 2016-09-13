/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 12:32:48 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/06 17:09:43 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lenstr(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != 0)
	{
		len++;
	}
	return (len);
}

int		test_forbidden(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\r')\
			|| (c == '\f') || (c == '\n') || (c == '\v'))
	{
		return (1);
	}
	else
		return (0);
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
