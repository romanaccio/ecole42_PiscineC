/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 19:16:16 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/11 17:46:33 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int	check_line(int val, int **grid, int i);
int	check_col(int val, int **grid, int j);
int	check_block(int val, int **grid, int i, int j);
int	resolve_grid(int **grid, int position);
#endif
