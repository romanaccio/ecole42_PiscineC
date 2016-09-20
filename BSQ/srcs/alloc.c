/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:59:01 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/19 15:25:27 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

/*
** Reallocate a char* with *increase* more bytes
*/

char				*ft_realloc_str(char *old, int increase)
{
	char			*new;
	int				i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char) * (i + increase + 1))) == NULL)
		return (NULL);
	i = -1;
	while (old[++i])
		new[i] = old[i];
	free(old);
	return (new);
}

/*
** Reallocate a char** with *increase* more bytes
*/

char				**ft_realloc_strtab(char **old, int increase)
{
	char			**new;
	int				i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char*) * (i + increase + 1))) == NULL)
		return (NULL);
	i = -1;
	while (old[++i])
		new[i] = old[i];
	free(old);
	new[i] = NULL;
	return (new);
}
