/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   altern_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:50:58 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/06 22:53:28 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

void	set_min(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
}

void	altern_case(char *str)
{
	int	x;

	x = 0;
	set_min(str);
	while (str[x])
	{
		if (x % 2 == 0 && is_alpha(str[x]))
			str[x] -= 32;
		x++;
	}
}

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	if (ac > 1)
	{
		while (av[x])
		{
			altern_case(av[x]);
			ft_putstr(av[x]);
			ft_putchar(' ');
			x++;
		}
	}
	ft_putchar('\n');
	return (0);
}
