/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:34:34 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/20 19:07:14 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"
#include <fcntl.h>

/*
 ** Get the table then process each file
*/

int			main(int argc, char **argv)
{
	int			i;
	t_square	*square;

	if (argc == 1)
	{
		DEBUG_STR("main : cas de stdin\n");
		if ((square = get_tab("")) == NULL)
			dsp_error("map error\n");
		else
			check_bsq(square);
	}
	else
	{
		DEBUG_STR("main : cas de ");
		DEBUG_NBR(argc - 1);
		DEBUG_STR(" fichiers\n");
		i = 0;
		while (++i < argc)
			if ((square = get_tab(argv[i])) == NULL)
				dsp_error("map error\n");
			else
				check_bsq(square);
	}
	return (0);
}
