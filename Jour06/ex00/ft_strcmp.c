/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:33:56 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/06 12:48:01 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 **  renvoit 0 si les chaines sont identiques
 **  sinon renvoie la diff entre le premier caractere different de s1 et s2
*/

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*(s1 + i) != 0) && (*(s2 + i) != 0) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
