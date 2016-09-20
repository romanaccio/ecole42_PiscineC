/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:00:29 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/18 13:40:15 by cfrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
** Read the input to get the rush
** Return the rush into a char**
*/

char		**get_tab(void)
{
	char	**tab;
	char	*new;
	int		i;

	i = 0;
	if ((tab = malloc(sizeof(char*))) == NULL)
		return (NULL);
	tab[0] = NULL;
	while ((new = ft_get_next_line(0)))
	{
		if ((tab = ft_realloc_strtab(tab, 1)) == NULL)
			return (NULL);
		tab[i++] = new;
		tab[i] = NULL;
	}
	if (tab[0] == NULL)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

/*
** Check each colle to display the result if it matches and "aucune" if not
*/

void		check_colle(char **tab)
{
	int		flag;
	t_size	*size;

	flag = 0;
	if ((size = check_colle_0(tab)))
		display_result(0, size, flag++);
	if ((size = check_colle_1(tab)))
		display_result(1, size, flag++);
	if ((size = check_colle_2(tab)))
		display_result(2, size, flag++);
	if ((size = check_colle_3(tab)))
		display_result(3, size, flag++);
	if ((size = check_colle_4(tab)))
		display_result(4, size, flag++);
	if (flag == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}

/*
** Get the table then check each colle
*/

int			main(void)
{
	char	**tab;

	if ((tab = get_tab()) == NULL)
	{
		ft_putstr("aucune\n");
		return (1);
	}
	check_colle(tab);
	return (0);
}
