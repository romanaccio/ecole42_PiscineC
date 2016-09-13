/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:33:02 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/09 12:34:15 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					main(int argc, char **argv)
{
	struct s_stock_par *pres;

	pres = ft_param_to_tab(argc, argv);
	ft_show_tab(pres);
	return (0);
}
