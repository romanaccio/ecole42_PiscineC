/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:40:09 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 15:56:44 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab);

int		main(void)
{
	char	*str;
	char	**res;

	str = "Que J Aime A Faire Connaitre";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	ft_print_words_tables(res);
	str = "\n\t Que J Aime A Faire Connaitre";
	printf("chaine a decomposer=%s\n", str);
	res = ft_split_whitespaces(str);
	ft_print_words_tables(res);
}
