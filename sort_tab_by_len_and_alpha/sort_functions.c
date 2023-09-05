#include "header.h"

void	sort_char_tab(char **tab)
{
	int		len_tab;
	int		count;
	int		count2;
	char	*tmp;

	len_tab = 0;
	while (tab[len_tab])
		len_tab++;
	count2 = 0;
	while (count2 < len_tab - 1)
	{
		count = 0;
		while (count < len_tab - 1)
		{
			if (ft_strlen(tab[count]) == ft_strlen(tab[count + 1]))
			{
				if (ft_strcmp(tab[count], tab[count + 1]) > 0)
				{
					tmp = tab[count];
					tab[count] = tab[count + 1];
					tab[count + 1] = tmp;
				}
			}
			count++;
		}
		count2++;
	}
}

void	sort_len_tab(char **tab)
{
	int		len_tab;
	int		count;
	int		count2;
	char	*tmp;

	len_tab = 0;
	while (tab[len_tab])
		len_tab++;
	count2 = 0;
	while (count2 < len_tab - 1)
	{
		count = 0;
		while (count < len_tab - 1)
		{
			if (ft_strlen(tab[count]) > ft_strlen(tab[count + 1]))
			{
				tmp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = tmp;
			}
			count++;
		}
		count2++;
	}
}
