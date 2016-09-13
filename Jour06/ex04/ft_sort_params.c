/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:49:34 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/06 20:48:24 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

int			ma_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*(s1 + i) != 0) && (*(s2 + i) != 0) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void		ma_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int		j;
	char	*echange;
	int		fin_tri;

	fin_tri = 0;
	while (fin_tri == 0)
	{
		fin_tri = 1;
		j = 0;
		while (++j < (argc - 1))
		{
			if (ma_strcmp(argv[j], argv[j + 1]) > 0)
			{
				echange = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = echange;
				fin_tri = 0;
			}
		}
	}
	j = 0;
	while (++j < argc)
	{
		ma_putstr(argv[j]);
	}
}
