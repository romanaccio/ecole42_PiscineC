/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 16:37:05 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/03 17:03:47 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calcul(int index, int val1, int val2)
{
	int res;

	if (index == 1)
		return (val2);
	res = ft_calcul(index - 1, val2, val1 + val2);
	return (res);
}

int	ft_fibonacci(int index)
{
	int resultat;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	resultat = 0;
	resultat = ft_calcul(index, 0, 1);
	return (resultat);
}
