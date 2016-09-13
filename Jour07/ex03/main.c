/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 17:34:10 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/07 17:47:15 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	int		i;
	char	*res;

	res = ft_concat_params(argc, argv);
	i = 0;
	while (res[i])
	{
		ft_putchar(res[i]);
		i++;
	}
}
