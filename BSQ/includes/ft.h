/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:15:04 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/20 13:55:40 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

# ifdef DEBUG
#  define DEBUG_STR ft_putstr
#  define DEBUG_NBR ft_putnbr
#  define DEBUG_CHAR ft_putchar
# else
#  define DEBUG_STR(...)
#  define DEBUG_NBR(...)
#  define DEBUG_CHAR(...)
# endif
#endif
