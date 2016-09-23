/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:28:44 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 16:01:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

typedef struct	s_word
{
	int order;
	char *str;
}				t_word;

int		ft_strlen(char *str);
void    ft_putchar(char c);
void	ft_putstr(char *str);
char    minuscule(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcmp_alpha(char *s1, char *s2);
char 	*ft_strdup(char *str);

#endif
