/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:57:09 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/09 16:49:38 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		ft_putchar(str[x++]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		count;

	len = 0;
	count = 0;
	while (src[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (!(copy))
		return (NULL);
	while (src[count])
	{
		copy[count] = src[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}
