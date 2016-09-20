/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colles_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 10:55:09 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/18 13:39:42 by cfrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
** Check if borders and middle are OK
*/

static int		check_colles_border(char c, t_size size, int i, int j)
{
	if (i > 0 && j > 0 && i < size.x - 1 && j < size.y - 1
		&& c != ' ')
		return (1);
	else if (i > 0 && i < size.x - 1 && (j == 0 || j == size.y - 1)
			&& c != '*')
		return (1);
	else if (j > 0 && j < size.y - 1 && (i == 0 || i == size.x - 1)
			&& c != '*')
		return (1);
	return (0);
}

/*
** Check when X or Y is equal to 1
*/

static int		check_small(t_size size, char **str)
{
	int			i;
	int			j;

	i = 1;
	if ((j = 1) && str[0][0] == '/' && size.x == 1 && size.y == 1)
		return (1);
	else if (str[0][0] != '/')
		return (0);
	else if (size.x == 1 && size.y > 1)
	{
		while (j < size.y - 1)
			if (str[j++][0] != '*')
				return (0);
		if (str[j][0] == '\\')
			return (1);
	}
	else if (size.x > 1 && size.y == 1)
	{
		while (i < size.x - 1)
			if (str[0][i++] != '*')
				return (0);
		if (str[0][i] == '\\')
			return (1);
	}
	return (0);
}

/*
** Function called to check if the input match the rush00
** Calculate the size of the input to know what it has to check
** If X and Y are greater than 1, check all the characters for error
*/

t_size			*check_colle_1(char **str)
{
	int			i;
	int			j;
	t_size		*size;

	if ((size = malloc(sizeof(t_size))) == NULL)
		return (NULL);
	size->x = 0;
	size->y = 0;
	while (str[size->y])
		(size->y)++;
	while (str[0][size->x])
		(size->x)++;
	if ((size->y == 1 || size->x == 1) && check_small(*size, str))
		return (size);
	if ((j = -1) && (str[0][0] != '/' || str[0][size->x - 1] != '\\'
		|| str[size->y - 1][0] != '\\' || str[size->y - 1][size->x - 1] != '/'))
		return (NULL);
	while (++j < size->y)
	{
		i = -1;
		while (++i < size->x)
			if (check_colles_border(str[j][i], *size, i, j))
				return (NULL);
	}
	return (size);
}
