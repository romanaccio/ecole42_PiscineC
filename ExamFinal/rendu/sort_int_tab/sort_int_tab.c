/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:53:19 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 12:01:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	int sort_again;
	unsigned int i;
	int tmp;

	sort_again = 1;
	while (sort_again)
	{
		sort_again = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				sort_again = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
