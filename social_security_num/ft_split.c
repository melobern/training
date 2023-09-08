/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:38:57 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/06 22:40:50 by mbernard         ###   ########.fr       */
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

int	ft_len_word(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !(ft_is_sep(str[len], charset)))
		len++;
	return (len + 1);
}

void	ft_write_word(char **tab, char *str, char *charset, int len_tab)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	while (str[x] && y < len_tab)
	{
		while (str[x] && ft_is_sep(str[x], charset))
			x++;
		if (!str[x])
			break ;
		tab[y] = malloc(sizeof(char) * ft_len_word((str + x), charset));
		if (!tab[y])
		{
			free(tab[y]);
			return ;
		}
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
	char	**tab;
	int		len_tab;

	len_tab = ft_len_tab(str, charset);
	tab = malloc(sizeof(char *) * (len_tab + 1));
	if (!(tab))
	{
		free(tab);
		return (0);
	}
	ft_write_word(tab, str, charset, len_tab);
	return (tab);
}
