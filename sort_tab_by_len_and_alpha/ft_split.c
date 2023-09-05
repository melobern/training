/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:38:57 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/27 16:18:22 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_sep(char letter, char *charset)
{
	int	c;

	c = 0;
	while (charset[c])
	{
		if (letter == charset[c])
			return (1);
		c++;
	}
	return (0);
}

int	ft_len_tab(char *str, char *charset)
{
	int	x;
	int	words;

	x = 0;
	words = 0;
	while (str[x])
	{
		while (str[x] && ft_is_sep(str[x], charset))
			x++;
		if (str[x])
			words++;
		while (str[x] && !(ft_is_sep(str[x], charset)))
			x++;
	}
	return (words);
}

void	ft_write_word(char **tab, char *str, char *charset)
{
    int x;
    int y;
    int z;

    x = 0;
    y = 0;
    while (str[x])
    {
        while (str[x] && ft_is_sep(str[x], charset))
            x++;
        if (!str[x])
            break;
        z = 0;
        while (str[x] && !ft_is_sep(str[x], charset))
	{
            z++;
	    x++;
	}
        tab[y] = malloc(sizeof(char) * (z + 1));
        if (!tab[y])
	{
		free(tab[y]);
	            return;
	}
        x -= z;
        z = 0;
        while (str[x] && !ft_is_sep(str[x], charset))
            tab[y][z++] = str[x++];
        tab[y][z] = '\0';
        y++;
    }
    tab[y] = 0;
}


char	**ft_split(char *str, char *charset)
{
	int		len_str;
	int		x;
	char	**tab;

	len_str = 0;
	x = -1;
	while (str[len_str])
		len_str++;
	tab = malloc(sizeof(char *) * (ft_len_tab(str, charset) + 1));
	if (!(tab))
	{
		free(tab);
		return (0);
	}
	if (!(*charset))
	{
		tab[0] = malloc(sizeof(char *) * (len_str + 1));
		if (!(tab[0]))
		{
			free(tab[0]);
			return (0);
		}
		while (str[++x])
			tab[0][x] = str[x];
		tab[0][x] = '\0';
		tab[1] = 0;
		return (tab);
	}
	ft_write_word(tab, str, charset);
	return (tab);
}
