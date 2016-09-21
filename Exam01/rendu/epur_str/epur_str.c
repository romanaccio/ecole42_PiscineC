/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 20:07:38 by exam              #+#    #+#             */
/*   Updated: 2016/09/09 21:05:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char 	trim(char **pstr)
{
	while (**pstr)
	{	
		if ((**pstr != ' ') && (**pstr != '\t'))
		{
			break ;
		}
		(*pstr)++;
	}
	return (**pstr);
}

void	print_word(char **pstr)
{
	while ((**pstr) && ((**pstr != ' ') && (**pstr != '\t')))
	{
		ft_putchar(**pstr);
		(*pstr)++;
	}

}

void	ft_epur_str(char *str)
{
	while (trim(&str))
	{
		print_word(&str);
		if (trim(&str))
		{
			ft_putchar(' ');
		}
	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
