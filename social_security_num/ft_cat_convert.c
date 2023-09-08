/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_convert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:34 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/08 21:30:48 by mbernard         ###   ########.fr       */
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
	char	*dest;
	int		x;
	int		y;
	int		len;

	len = 0;
	x = 0;
	while (av[x])
	{
		len += ft_strlen(av[x]);
		x++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
	{
		free(dest);
		return (NULL);
	}
	y = 0;
	while (y < x)
	{
		ft_strcat(dest, av[y]);
		y++;
	}
	return (dest);
}
