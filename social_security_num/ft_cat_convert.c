/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_convert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:34 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/09 16:58:52 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (src[y])
		dest[x++] = src[y++];
	dest[x] = '\0';
}

char	*convert(char **av)
{
	char	dest[30];
	int		x;
	int		y;
	int		len;

	ft_strncpy(dest, "", 1);
	len = 0;
	x = 0;
	while (av[x])
	{
		len += ft_strlen(av[x]);
		x++;
	}
	y = 0;
	while (y < x)
	{
		ft_strcat(dest, av[y]);
		y++;
	}
	return (ft_strdup(dest));
}

void	print_lines(long long cop_num, long long key)
{
	char	num[13];
	int		x;

	x = 12;
	while (cop_num > 0)
	{
		num[x] = (cop_num % 10) + '0';
		cop_num = cop_num / 10;
		x--;
	}
	if (num[5] == '1' && (num[6] == '9' || num[6] == '8'))
	{
		num[5] = '2';
		if (num[6] == '9')
			num[6] = 'A';
		else
			num[6] = 'B';
	}
	ft_putstr(num);
	ft_putchar(' ');
	ft_putchar((key / 10) + '0');
	ft_putchar((key % 10) + '0');
	ft_putchar('\n');
}
