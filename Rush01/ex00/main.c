/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 19:01:01 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/11 17:46:14 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include "check.h"

void	print_sudoku(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grid[i][j]);
			if ((j + 1) % 9)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		**populate_grid(char **argv)
{
	int x;
	int y;
	int **sudoku;

	sudoku = (int **)malloc(sizeof(int *) * 9);
	x = 0;
	while (x < 9)
	{
		if (ft_strlen(argv[x]) != 9)
			return (NULL);
		sudoku[x] = (int *)malloc(sizeof(int) * 9);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				sudoku[x][y] = 0;
			else if (argv[x][y] >= '1' && argv[x][y] <= '9')
				sudoku[x][y] = argv[x][y] - '0';
			else
				return (NULL);
			y++;
		}
		x++;
	}
	return (sudoku);
}

int		main(int argc, char **argv)
{
	int **sudoku;

	if (argc == 10)
	{
		sudoku = populate_grid(&argv[1]);
		if (sudoku == NULL)
		{
			ft_putstr("Erreur\n");
			return (1);
		}
		if (resolve_grid(sudoku, 0))
		{
			print_sudoku(sudoku);
		}
		else
		{
			ft_putstr("Erreur\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("Erreur\n");
		return (1);
	}
}
