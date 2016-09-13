/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:35:09 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 15:54:05 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

void	print_word(char *word)
{
	int i;

	i = 0;
	while (word[i])
	{
		ft_putchar(word[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		print_word(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
