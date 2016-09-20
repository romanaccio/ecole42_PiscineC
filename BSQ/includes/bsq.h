/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:37:53 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/20 18:18:06 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>

# define KO 0
# define OK 1

typedef struct	s_square
{
	int		col_nb;
	int		line_nb;
	char	**tab;
	char	empty_char;
	char	obs_char;
	char	full_char;
}				t_square;

typedef struct	s_bsq
{
	int x;
	int y;
	int len;
}				t_bsq;

int				find_sub_square(t_square *square);
int				check_bsq(t_square *square);
int				dsp_bsq(t_square *square);
int				dsp_error(char *str);
int				is_valid(t_square *square);
char			*ft_realloc_str(char *old, int increase);
char			**ft_realloc_strtab(char **old, int increase);
char			*ft_get_next_line(int fd);
int				ft_get_first_line(int fd, t_square *square);
t_square		*get_tab(char *filename);
int				convert_matrix_square(t_square *square, int **tqb);
int				**feed_matrix(t_square *square);
int				dsp_matrix(t_square *square, int **tab);

#endif
