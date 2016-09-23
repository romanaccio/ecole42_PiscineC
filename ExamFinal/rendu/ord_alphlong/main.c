/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:14:36 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 16:42:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "util.h"

int		word_count(char *str)
{
	int count;
	int mot_trouve;

	count = 0;
	mot_trouve = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
		{
			if (!mot_trouve)
			{
				mot_trouve = 1;
				count ++;
			}
		}
		else
			mot_trouve = 0;
		str++;
	}
	return (count);
}

void	print_tab(t_word * tab, int size)
{
	int i;
	int previous_len;
	int l;
	int	first_line_printed;
	int	first_word_printed;

	previous_len = 0;
	first_line_printed = 0;
	first_word_printed = 0;
	i = -1;
	while (++i < size)
	{
		l = ft_strlen(tab[i].str);
		if (l != previous_len)
		{
			if (first_line_printed)
			{
				ft_putstr("\n");
				first_word_printed = 0;
			}
		}
		else
		{
			if (first_word_printed)
			{
				ft_putchar(' ');
			}
		}
		ft_putstr(tab[i].str);
		first_line_printed = 1;
		first_word_printed = 1;
		previous_len = l;
	}
	ft_putstr("\n");

}

void	sort_word_tab(t_word * tab, int size)
{
	int i;
	int sort_again;
	t_word tmp;

	sort_again = 1;
	while (sort_again)
	{
		sort_again = 0;
		i = 0;
		while (i < (size -1))
		{
			if (ft_strlen(tab[i].str) > ft_strlen(tab[i + 1].str))
			{
				sort_again = 1;
				tmp.order = tab[i].order;
				tmp.str = tab[i].str;
				tab[i].order = tab[i+1].order;
				tab[i].str = tab[i+1].str;
				tab[i + 1].order = tmp.order;
				tab[i + 1].str = tmp.str;
			}
			else if ((ft_strlen(tab[i].str) == ft_strlen(tab[i + 1].str))
					&& (ft_strcmp_alpha(tab[i].str, tab[i+1].str)>0))
			{
				sort_again = 1;
				tmp.order = tab[i].order;
				tmp.str = tab[i].str;
				tab[i].order = tab[i+1].order;
				tab[i].str = tab[i+1].str;
				tab[i + 1].order = tmp.order;
				tab[i + 1].str = tmp.str;
			}
			i++;
		}
	}
}


void	ord_alphalong(char * str)
{
	t_word *tab;
	int i;
	int number_words;
	int mot_trouve;

	tab = malloc(sizeof(t_word) * word_count(str));
	i = 0;
	number_words = 0;
	mot_trouve = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (!mot_trouve)
			{
				mot_trouve = 1;
				tab[number_words].order = number_words;
				tab[number_words].str = ft_strdup(str+i);
				number_words++;
			}
		}
		else
			mot_trouve = 0;
		i++;

	}
	sort_word_tab(tab, number_words);
	print_tab(tab, number_words);
}

int		main(int ac, char ** av)
{
	if (ac == 2)
	{
		ord_alphalong(av[1]);
	}
	return (0);
}
