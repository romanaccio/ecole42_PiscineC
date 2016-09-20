/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:19:20 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/18 13:40:07 by cfrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
** Read *fd* character by character until next line
** Remove the \n at the end of the line
** Return the read string with \0 at the end
*/

char				*ft_get_next_line(int fd)
{
	char			buffer[1];
	char			*str;
	int				i;

	i = 0;
	if ((str = malloc(sizeof(char))) == NULL)
		return (NULL);
	str[0] = 0;
	while (read(fd, buffer, 1) && buffer[0] != '\n')
	{
		if ((str = ft_realloc_str(str, 1)) == NULL)
			return (NULL);
		str[i++] = buffer[0];
		str[i] = 0;
	}
	if (str[0] == 0)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
