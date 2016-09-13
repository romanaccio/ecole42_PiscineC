/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 19:03:23 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 19:24:02 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	hour %= 24;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((0 <= hour) && (hour < 12))
		printf("%02d.00 A.M. AND ", hour);
	else
		printf("%02d.00 P.M. AND ", hour % 12);
	hour += 1;
	hour %= 24;
	if ((0 <= hour) && (hour < 12))
		printf("%02d.00 A.M.\n", hour);
	else
		printf("%02d.00 P.M.\n", hour % 12);
}
