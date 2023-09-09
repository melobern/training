/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:57:36 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/09 16:47:27 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_municipality(char *str, long long key)
{
	int			x;
	char		copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strncpy(copy, str, 13);
	copy[7] = '0';
	copy[8] = '0';
	copy[9] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("\nMUNICIPALITY :\n");
	while (x++ < 1000)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
			print_lines(cop_num, key);
		cop_num += 1000;
	}
}

void	ft_birth_rate(char *str, long long key)
{
	int			x;
	char		copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strncpy(copy, str, 13);
	copy[10] = '0';
	copy[11] = '0';
	copy[12] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("\nBIRTH RATE :\n");
	while (x++ < 1000)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
			print_lines(cop_num, key);
		cop_num += 1;
	}
}

void	ft_year(char *str, long long key)
{
	int			x;
	char		copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strncpy(copy, str, 13);
	copy[1] = '0';
	copy[2] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("\nYEAR :\n");
	while (x++ < 100)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
			print_lines(cop_num, key);
		cop_num += 10000000000;
	}
}

void	ft_month(char *str, long long key)
{
	int			x;
	char		copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strncpy(copy, str, 13);
	copy[3] = '0';
	copy[4] = '1';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("\nMONTH :\n");
	while (x++ < 100)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
			print_lines(cop_num, key);
		cop_num += 100000000;
	}
}

void	ft_town(char *str, long long key)
{
	int			x;
	char		copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strncpy(copy, str, 13);
	copy[5] = '0';
	copy[6] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("\nTOWN :\n");
	while (x++ < 100)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
			print_lines(cop_num, key);
		cop_num += 1000000;
	}
}
