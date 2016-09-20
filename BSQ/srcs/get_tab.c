/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:40:40 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 13:08:54 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"
#include <fcntl.h>

void		free_tab(t_square *p)
{
	if (p)
	{
		if (p->tab)
			free(p->tab);
		free(p);
	}
}

/*
** allocates square and tab
*/

t_square	*alloc_square(void)
{
	t_square *square;

	if ((square = malloc(sizeof(t_square))) == NULL)
		return (NULL);
	if ((square->tab = malloc(sizeof(char*))) == NULL)
	{
		free(square);
		return (NULL);
	}
	square->tab[0] = NULL;
	return (square);
}

/*
** Read the input to get the map
** Return the map into a t_square *
** NB : empty finename means stdin
*/

t_square	*get_tab(char *filename)
{
	t_square	*square;
	char		*new;
	int			i;
	int			fd;

	if ((fd = (*filename == 0) ? 0 : open(filename, O_RDONLY)) == -1)
		return (NULL);
	if ((square = alloc_square()) == NULL)
		return (NULL);
	if (!ft_get_first_line(fd, square))
		return (NULL);
	i = 0;
	while ((new = ft_get_next_line(fd)))
	{
		if ((square->tab = ft_realloc_strtab(square->tab, 1)) == NULL)
			return (NULL);
		square->tab[i++] = new;
		square->tab[i] = NULL;
	}
	if ((square->tab[0] == NULL) || (!is_valid(square)))
	{
		free_tab(square);
		return (NULL);
	}
	return (square);
}
