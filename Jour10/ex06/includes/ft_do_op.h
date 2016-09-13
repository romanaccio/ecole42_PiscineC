/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:32:52 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/13 12:10:57 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

struct	s_do_op
{
	char operation;
	void (*f)(int, int);
};

void	plus(int a, int b);
void	minus(int a, int b);
void	divide(int a, int b);
void	modulo(int a, int b);
void	by(int a, int b);

#endif
