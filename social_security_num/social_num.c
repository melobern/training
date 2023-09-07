/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   social_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:16:14 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/07 17:06:39 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long long	calcul_nums(char *str)
{
	char		little_num[13];
	long long	num;
	long long	key;

	ft_strncpy(little_num, str, 13);
	num = ft_atoi(little_num);
	key = 97 - (num % 97);
	return (key);
}

long long	calcul_the_key(char *str)
{
	char		little_num[13];
	long long	num;
	long long	key;

	ft_strncpy(little_num, str, 13);
	num = ft_atoi(little_num);
	key = 97 - (num % 97);
	return (key);
}

void	print_just_key(char *str)
{
	long long	key;

	key = calcul_the_key(str);
	ft_putstr("The key of ");
	ft_putstr(str);
	ft_putstr(" is : ");
	ft_putnbr(key);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (ft_strlen(av[1]) < 13)
			ft_putstr("Oups ! This number is way too short !");
		else if (ft_strlen(av[1]) == 13)
			print_just_key(av[1]);
		else if (ft_strlen(av[1]) == 14)
			ft_putstr("Oups ! Not enough or too many numbers !");
		else if (ft_strlen(av[1]) == 15)
		{
			calcul_nums(av[1]);
		}
		else if (ft_strlen(av[1]) > 15)
			ft_putstr("Oups ! This number is way too long !");
	}
	ft_putchar('\n');
	return (0);
}
