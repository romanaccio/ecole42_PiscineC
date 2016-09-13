/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:46:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/03 16:16:48 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int resultat;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power == 0)
		return (1);
	resultat = nb * ft_recursive_power(nb, power - 1);
	return (resultat);
}
