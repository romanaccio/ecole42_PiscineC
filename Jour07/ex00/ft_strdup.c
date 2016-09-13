/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:50:00 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 12:06:36 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (src[len])
		len++;
	res = (char *)malloc(sizeof(*src) * (len + 1));
	i = 0;
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = src[i];
	return (res);
}
