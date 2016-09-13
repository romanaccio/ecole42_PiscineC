/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 19:44:47 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/09 13:02:59 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>

int					my_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

char				*my_strdup(char *src)
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

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*res;
	int					i;

	res = (struct s_stock_par *)malloc(sizeof(struct s_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		res[i].size_param = my_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = my_strdup(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
