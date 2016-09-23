/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:18:09 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 13:13:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int len(char *str)
{
	int i;
	if (str == NULL)
		return (0);

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *concat_char(char c, char *str)
{
	int l;
	char *res;
	int i;

	l=len(str);
	res = malloc(sizeof(char) * (l + 2));
	if (res == NULL)
		return (NULL);
	res[0] = c;
	i = 0;
	while (i < l)
	{
		res[i + 1] = str[i];
		i++;
	}
	res[i + 1] = 0;
	return (res);
}

char convert_to_char(int value, int base)
{
	if (value < 0)
		value = -value;
	if (base <= 10)
		return ('0' + value);
	if (value < 10) 
		return ('0' + value);
	else 
		return ('A' + value - 10); 
	return ('0');
}

char    *ft_itoa_base(int value, int base)
{
	char *res;
	int is_negative;

	if ((base < 2) && (base > 16))
			return NULL;
	res = malloc(sizeof(char));
	if (res == NULL)
			return NULL;
	is_negative = 1;
	if (value >= 0)
	{
		is_negative = 0;
		value = -value;
	}
	if (value == 0)
	{
		res = concat_char('0', res);
		return (res);
	}
	while (value)
	{
		res = concat_char(convert_to_char(value % base, base), res);
		value /= base;

	}
	if (base == 10 && is_negative)
		res = concat_char('-', res);
	return (res);
}
