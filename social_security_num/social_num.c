/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   social_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:16:14 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/07 00:02:27 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	calcul_the_key(char *str)
{
	
}

void	print_just_key(char *str)
{
	int	key;

	key = calcul_the_key(str);
	ft_putstr("The key of ");
	ft_putstr(str);
	ft_putstr(" is : ");
	ft_putnbr(key);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		while (av[1])
		{
			if (ft_strlen(av[1] < 13))
				ft_putstr("Oups ! This number is way too short. Please provide a longer number if possible.");
			else if (ft_strlen(av[1]) == 13)
				print_just_key(av[1]);
			else if (ft_strlen(av[1]) == 14)
				ft_putstr("Oups ! This number is either too short,
					either too long. Please provide the right number if possible.");
			else if (ft_strlen(av[1]) == 15)
			{
				calcul_keys(av[1]); // HERE IS THE FUNCTION
			}
			else if (ft_strlen(av[1] > 15))
				ft_putstr("Oups ! This number is way too long. Please provide a shorter number if possible.");
		}
	ft_putchar('\n');
	return (0);
}
