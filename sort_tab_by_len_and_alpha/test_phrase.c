#include "header.h"

void	split_sort_write(char *str)
{
	char **tab;
	int	x;

	x = 0;
	tab = ft_split(str, " 	");
	sort_len_tab(tab);
	sort_char_tab(tab);
	while (tab[x])
	{
		ft_putstr(tab[x]);
		free(tab[x]);
		x++;
		ft_putchar('\n');
	}
	free(tab);
}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		split_sort_write(av[1]);
	}
	else
		ft_putchar('\n');
}
