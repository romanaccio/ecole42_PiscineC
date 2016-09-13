/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:22:02 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/05 18:43:22 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				zero_found;

	i = 0;
	zero_found = 0;
	while (i < n)
	{
		if (zero_found == 0)
		{
			if (src[i] == 0)
				zero_found = 1;
			dest[i] = src[i];
		}
		else
			dest[i] = 0;
		i++;
	}
	return (dest);
}
