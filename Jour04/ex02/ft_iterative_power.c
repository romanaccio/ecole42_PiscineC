/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:30:16 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/03 15:58:29 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int resultat;
	int i;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	resultat = nb;
	i = power;
	while (i > 1)
	{
		i--;
		resultat *= nb;
	}
	return (resultat);
}
