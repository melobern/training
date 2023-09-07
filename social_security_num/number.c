/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:29:14 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/07 16:49:22 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	int_len(long long num)
{
	int	len;

	len = 0;
	while (num / 10 > 0)
		len++;
	return (len);
}

void	ft_putnbr(long long nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
