/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 18:40:17 by exam              #+#    #+#             */
/*   Updated: 2016/09/09 20:00:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char 	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char res;

	res = octet & 0b0001;
	i = 0;
	while (i < 7)
	{
		octet >>= 1;
		res <<= 1;
		res += (octet & 0b0001);
		i++;
	}
	return (res);
}
