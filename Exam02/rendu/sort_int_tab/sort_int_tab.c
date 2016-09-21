/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 21:14:46 by exam              #+#    #+#             */
/*   Updated: 2016/09/16 21:29:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int tri_necessaire = 1;
	unsigned int i;
	int tmp;

	while (tri_necessaire)
	{
		i = 0;
		tri_necessaire = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab [i+1])
			{
				tri_necessaire = 1;
				tmp = tab[i];
				tab[i] = tab [i+1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
