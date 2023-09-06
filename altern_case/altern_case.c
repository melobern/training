#include "header.h"

void	set_min(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}

}

void	altern_case(char *str)
{
	int	x;

	x = 0;
	set_min(str);
	while (str[x])
	{
		if (x % 2 == 0)
			str[x] -= 32;
		x++;
	}

	
}

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	if (ac > 2)
	{
		while (av[x])
		{
			altern_case(av[x]);
			ft_putstr(av[x]);	
			ft_putchar(' ');
			x++;
		}
	}
	ft_putchar('\n');
	return (0);
}
