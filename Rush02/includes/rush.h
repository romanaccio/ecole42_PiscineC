/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfrouin <cfrouin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:26:15 by cfrouin           #+#    #+#             */
/*   Updated: 2016/09/17 17:29:09 by cfrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_size
{
	int				x;
	int				y;
}					t_size;

// ft_get_next_line
char				*ft_get_next_line(int fd);

// alloc.c
char				*ft_realloc_str(char *old, int increase);
char				**ft_realloc_strtab(char **old, int increase);

// display.c
void				ft_putstr(char *str);
void				display_result(int number, t_size *size, int first);
void				ft_putnbr(int nb);

// check_colles.c
t_size				*check_colle_0(char **str);
t_size				*check_colle_1(char **str);
t_size				*check_colle_2(char **str);
t_size				*check_colle_3(char **str);
t_size				*check_colle_4(char **str);

#endif
