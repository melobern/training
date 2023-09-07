/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_convert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:34 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/07 20:00:26 by mbernard         ###   ########.fr       */
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

char	*convert(int ac, char **av)
{
	char	*dest;
	int		x;
	int		len;

	len = 0;
	x = 1;
	while (x < ac)
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
	x = 1;
	while (x < ac)
	{
		ft_strcat(dest, av[x]);
		x++;
	}
	return (dest);
}
