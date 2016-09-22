/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:34:27 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/22 17:43:58 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*extract_word(char *str, int *offset)
{
	char	*res;
	int		found;
	int		i;
	int		j;

	found = 0;
	i = 0;
	j = 0;
	while (*str && str[i + *offset] &&  (str[i + *offset] == ' '  ||\
			   	str[i + *offset] == '\t'))
		i++;
	res = malloc(sizeof(char) * 255);
	if (res == NULL)
		return (NULL);
	while (str[i + *offset] && (str[i + *offset] != ' '  &&\
			   	str[i + *offset] != '\t'))
	{
		found = 1;
		res[j] = str[i + *offset];
		i++;
		j++;
	}
	res[i] = 0;
	if (!found)
	{
		free(res);
		return (NULL);
	}
	*offset += i;
	return (res);
}

char    **ft_split(char *str)
{
	char	**tab;
	int		i;
	int		offset;
	
	tab = malloc(sizeof(char *) * 255);
	i = 0;
	offset = 0;
	while ((tab[i] = extract_word(str, &offset)))
	{
		i++;	
	}
	tab[i] = NULL;
	return (tab);
}

int		main(int argc, char **argv)
{
	char ** res;

	if (argc != 2)
		return (1);
	res = ft_split(argv[1]);
	while (*res)
	{
		printf("%s\n", *res);
		res++;
	}
}
