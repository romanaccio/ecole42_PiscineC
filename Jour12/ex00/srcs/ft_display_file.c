/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 14:06:15 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/14 16:01:27 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#include "ft.h"

#define BUF_SIZE 4096

int		readfile(char *filename)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "Error opening file ");
		ft_putstr(2, filename);
		ft_putstr(2, ".\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = 0;
		ft_putstr(1, buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr(2, "Error closing file ");
		ft_putstr(2, filename);
		ft_putstr(2, ".\n");
		return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (0);
	}
	return (readfile(argv[1]));
}
