/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:06:27 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/07 17:07:17 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

long long	ft_atoi(char *str)
{
	int			x;
	long long	nb;

	x = 0;
	nb = 0;
	while (ft_is_space(str[x] || ft_is_sign(str[x])))
		x++;
	while (ft_is_num(str[x]))
		nb = nb * 10 + (str[x++] - '0');
	if (str[x] == 'A' || str[x] == 'a' || str[x] == 'B' || str[x] == 'b')
	{
		nb = (nb - (str[x - 1] - '0')) / 10;
		if (str[x] == 'A' || str[x] == 'a')
			nb = nb * 100 + 19;
		else if (str[x] == 'B' || str[x] == 'b')
			nb = nb * 100 + 18;
		x++;
	}
	while (ft_is_num(str[x]))
		nb = nb * 10 + (str[x++] - '0');
	return (nb);
}
/*
char	*ft_itoa(long long num)
{
	char	*social_num;

	social_num = malloc(sizeof(char) * (int_len(num) + 1));
}
*/
