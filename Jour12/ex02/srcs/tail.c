/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:44:00 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/15 17:53:36 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#include "ft.h"

#define BUF_SIZE 25000

int			ft_seek(int fd, char *filename, int n)
{
	char	*buf[2];
	int		ret;
	int		size_file;
	int		fd2;
	int		to_read;

	errno = 0;
	fd2 = open(filename, O_RDONLY);
	if (fd2 == -1)
	{
		print_errno(filename, errno);
		return (-1);
	}
	size_file = 0;
	while ((ret = read(fd2, buf, 1)))
		size_file += ret;
	to_read = size_file - n - 1;
	while ((to_read > 0) && (ret = read(fd, buf, 1)))
		to_read--;
	return (ret);
}

int			ft_open_and_seek(char *filename, int n, int seek_from_end)
{
	int		fd;
	char	*buf[2];
	int		ret;

	errno = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_errno(filename, errno);
		return (fd);
	}
	if (seek_from_end)
	{
		errno = 0;
		if (ft_seek(fd, filename, n) == -1)
			print_errno(filename, errno);
	}
	else
	{
		while ((n) && (ret = read(fd, buf, 1)))
			n--;
	}
	return (fd);
}

/*
 ** par convention, si filename est vide, je prends sur le port stdin
*/

void		readfilefromend(char *filename, int n, \
		int seek_from_end, int number_of_files)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		fd;

	fd = ft_open_and_seek(filename, n, seek_from_end);
	if (fd == -1)
	{
		return ;
	}
	if (number_of_files > 1)
	{
		ft_putstr(1, "==> ");
		ft_putstr(1, filename);
		ft_putstr(1, " <==\n");
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = 0;
		ft_putstr(1, buf);
	}
	errno = 0;
	if (close(fd) == -1)
		print_errno(filename, errno);
	return ;
}

int			check_option(char *str)
{
	int len;
	int found_c;

	found_c = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	if (len == 2)
		if ((str[0] == '-') && str[1] == 'c')
			found_c = 1;
	if (found_c == 0)
		ft_putstr(2, \
				"Usage: ft_tail -c # File(s) ...\n");
	return (found_c);
}

int			main(int argc, char **argv)
{
	int i;
	int n;
	int seek_from_end;

	if (argc <= 3)
		ft_putstr(2, \
				"Usage: ft_tail -c # File(s) ...\n");
	else
	{
		if (argc > 3)
			if (!check_option(argv[1]))
				return (0);
		n = ft_atoi(argv[2]);
		n = (n < 0) ? -n : n;
		n = (n) ? n - 1 : 0;
		seek_from_end = (argv[2][0] == '+') ? 0 : 1;
		i = 2;
		while (++i < argc)
		{
			readfilefromend(argv[i], n, seek_from_end, argc - 3);
			if (i < (argc - 1))
				ft_putstr(1, "\n");
		}
	}
	return (0);
}
