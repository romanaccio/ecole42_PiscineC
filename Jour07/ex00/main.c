/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:54:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 12:08:10 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 		*ft_strdup(char *src);

int			main()
{
	char * src;
	char * res;

	src = "Antoine";
	res = ft_strdup(src);
	printf("src=%s, res=%s\n", src, res);

	src = "";
	res = ft_strdup(src);
	printf("src=%s, res=%s\n", src, res);

	src = "Le chat de la voisine, qui mange la bonne cuisine...";
	res = ft_strdup(src);
	printf("src=%s, res=%s\n", src, res);
}
