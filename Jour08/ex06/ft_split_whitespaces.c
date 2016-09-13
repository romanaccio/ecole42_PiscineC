/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:35:27 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/09 15:44:46 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbre_mots(char *str)
{
	int i;
	int nbre;
	int found_word;

	nbre = 0;
	i = 0;
	found_word = 0;
	while (*(str + i) != 0)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (found_word == 0)
			{
				found_word = 1;
				nbre++;
			}
		}
		else
			found_word = 0;
		i++;
	}
	return (nbre);
}

char	*my_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	remove_white(char **str)
{
	int i;

	i = 0;
	while ((*str)[i] != 0)
	{
		if ((*str)[i] != ' ' && (*str)[i] != '\t' && (*str)[i] != '\n')
		{
			break ;
		}
		i++;
	}
	(*str) += i;
}

char	*extract_word(char **str)
{
	int		size_word;
	char	*res;
	int		pos_premier_car;

	res = NULL;
	size_word = 0;
	pos_premier_car = 0;
	remove_white(str);
	while ((*str)[size_word] != 0 && ((*str)[size_word] != ' ' && \
				(*str)[size_word] != '\t' && (*str)[size_word] != '\n'))
	{
		size_word++;
	}
	if (size_word)
	{
		res = (char *)malloc(sizeof(char) * (size_word + 9));
		my_strncpy(res, *str, size_word);
	}
	(*str) += size_word;
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	int		nbre;
	int		i;
	char	**res;
	char	*pmot;

	nbre = nbre_mots(str);
	res = (char **)malloc(sizeof(char *) * (nbre + 9));
	i = 0;
	while (i < nbre)
	{
		pmot = extract_word(&str);
		res[i] = pmot;
		i++;
	}
	res[i] = 0;
	return (res);
}
