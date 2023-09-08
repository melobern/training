/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   social_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:16:14 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/08 23:14:14 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	calcul_nums(char *str)
{
	char		little_num[13];
	//long long	num;
	long long	key;

	ft_strncpy(little_num, str, 13);
	key = (str[13] - '0') * 10 + (str[14] - '0');
	ft_municipality(little_num, key);
	ft_birth_rate(little_num, key);
	//num = ft_atoi(little_num);
	//key = atoi(str + 13);
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
	if (str[5] == '1' && (str[6] == '9' || str[6] == '8'))
	{
		ft_putstr("Corsican !\n");
		str[5] = '2';
		if (str[6] == '9')
			str[6] = 'A';
		else
			str[6] = 'B';
	}
	ft_putstr("The key of ");
	ft_putstr(str);
	ft_putstr(" is : ");
	ft_putnbr(key);
}

void	one_arg_num(char *av)
{
	if (ft_strlen(av) < 13)
		ft_putstr("Oups ! This number is way too short !");
	else if (ft_strlen(av) == 13)
		print_just_key(av);
	else if (ft_strlen(av) == 14)
		ft_putstr("Oups ! Not enough or too many numbers !");
	else if (ft_strlen(av) == 15)
		calcul_nums(av);
	else if (ft_strlen(av) > 15)
		ft_putstr("Oups ! This number is way too long !");
}

int	main(int ac, char **av)
{
	char	*dest;

	if (ac > 1)
	{
		if (ac == 2)
			dest = convert(ft_split(av[1], " 	"));
		else if (ac > 2)
			dest = convert(av + 1);
		one_arg_num(dest);
		free(dest);
	}
	ft_putchar('\n');
	return (0);
}
