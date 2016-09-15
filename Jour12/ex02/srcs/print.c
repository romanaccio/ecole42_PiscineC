/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 17:12:01 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/15 17:16:47 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft.h"

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
	ft_putstr(2, "ft_tail: ");
	ft_putstr(2, filename);
	ft_putstr(2, ": ");
	ft_putstr(2, errstr);
}
