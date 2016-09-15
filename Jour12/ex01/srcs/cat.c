/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 16:49:23 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/15 10:59:13 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#include "ft.h"

#define BUF_SIZE 25000

void		print_errno(char *filename, int err)
{
	char *errstr;

	errstr = "Unknowm error\n";
	if (err == EPERM)
		errstr = "Operation not permitted\n";
	if (err == ENOENT)
		errstr = "No such file or directory\n";
	if (err == EACCES)
		errstr = "Permission denied\n";
	if (err == ENOEXEC)
		errstr = "Exec format error\n";
	if (err == EBADF)
		errstr = "Bad file descriptor\n";
	if (err == EEXIST)
		errstr = "File exists\n";
	ft_putstr(2, "ft_cat: ");
	ft_putstr(2, filename);
	ft_putstr(2, ": ");
	ft_putstr(2, errstr);
}

/*
 ** par convention, si filename est vide, je prends sur le port stdin
*/

void		readfile(char *filename)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		fd;

	if (filename[0] == 0)
		fd = 0;
	else
	{
		errno = 0;
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			print_errno(filename, errno);
			return ;
		}
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

int			main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		readfile("");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			ft_putstr(2, "ft_cat: sorry, no parameters allowed\n");
		}
		else
			readfile(argv[i]);
		i++;
	}
	return (0);
}
