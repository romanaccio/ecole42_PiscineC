/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:19:20 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/20 18:19:12 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

/*
** Read *fd* character by character until next line
** Remove the \n at the end of the line
** Return the read string with \0 at the end
*/

char	*ft_get_next_line(int fd)
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

int		ft_get_first_line(int fd, t_square *square)
{
	char			*str;
	int				i;
	int				len;
	int				res;

	res = 0;
	i = 0;
	str = ft_get_next_line(fd);
	if (str)
	{
		len = ft_strlen(str);
		square->line_nb = ft_atoi(str);
		if ((square->line_nb < 1) || (len < 4))
			return (0);
		square->empty_char = str[len - 3];
		square->obs_char = str[len - 2];
		square->full_char = str[len - 1];
		res = 1;
	}
	return (res);
}
