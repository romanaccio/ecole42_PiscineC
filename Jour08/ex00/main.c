/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 17:34:10 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 15:16:21 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int		i;
	char	*str;
	char	**res;

	str = "Que J Aime A Faire Connaitre";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i])
	{
		printf("res[%d]=%s\n", i, res[i]);
		i++;
	}

	str = "\tQue\tJ\nAime\tA Faire Connaitre";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i])
	{
		printf("res[%d]=%s\n", i, res[i]);
		i++;
	}

	str = " Que J    Aime A Faire Connaitre  ";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i])
	{
		printf("res[%d]=%s\n", i, res[i]);
		i++;
	}

	str = " \n ";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i])
	{
		printf("res[%d]=%s\n", i, res[i]);
		i++;
	}

	str = "";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i])
	{
		printf("res[%d]=%s\n", i, res[i]);
		i++;
	}
}
