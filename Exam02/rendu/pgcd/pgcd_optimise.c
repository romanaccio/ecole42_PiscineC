/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd_optimise.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:21:18 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/22 15:21:36 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
 ** algo d'Euclide
 ** si un des nombres est nul, l'autre est le PGCD
 ** sinon il faut prendre le reste de la division entiere du plus grand
 ** par le plus petit et laisser le plus petit inchangé.
 ** Puis, recommencer ainsi avec la nouvelle paire jusqu'à ce que un des deux
 **nombres soit nul. Dans ce cas, l'autre nombre est le PGCD.
*/

int	pgcd(int a, int b)
{
	if (a == 0)
		return (b);
	if (b == 0)
		return (a);
	return (pgcd(b, (a % b)));
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", pgcd(a, b));
}
