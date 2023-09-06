/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:10:38 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/06 19:11:27 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_strings(char *s1, char *s2)
{
	free(s1);
	free(s2);
}

void	put_min(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] >= 'A' && s1[count] <= 'Z')
			s1[count] += 32;
		if (s2[count] >= 'A' && s2[count] <= 'Z')
			s2[count] += 32;
		count++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		count;
	int		num;
	char	*cop1;
	char	*cop2;

	if (!s1[0])
		return (-s2[0]);
	cop1 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	cop2 = malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (!cop1 || !cop2)
		free_strings(cop1, cop2);
	ft_strcpy_two(cop1, s1, cop2, s2);
	put_min(cop1, cop2);
	count = -1;
	while (cop1[++count] || cop2[count])
	{
		if (cop1[count] != cop2[count])
		{
			num = cop1[count] - cop2[count];
			free_strings(cop1, cop2);
			return (num);
		}
	}
	free_strings(cop1, cop2);
	return (0);
}
