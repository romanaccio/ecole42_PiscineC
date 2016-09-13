/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:44:03 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/02 14:44:24 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_strrev(char *str)
{
	int i;
	int len;
	char c;

	len = 0;
	while (*(str + len) != 0)
		len ++;
	
	printf("Taille chaine : %d\n", len);

	if (len == 0)
		return (str);

	i = 0;
	while (i <  len)
	{
		c = *(str + len - 1 - i);
		printf("Position %d, char = %c\n",i, c);
		*(str + i) = c;
		i++;
	}
	return (str);
}
