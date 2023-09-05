#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		ft_putchar(str[x++]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	num;
	char	*cop1;
	char	*cop2;

	count = 0;
	cop1 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	cop2 = malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (!cop1 || !cop2)
	{
		free(cop1);
		free(cop2);
		return (0);
	}
	if (!s1[count])
		return (-s2[count]);
	ft_strcpy(cop1, s1);
	ft_strcpy(cop2, s2);
	while (cop1[count] || cop2[count])
	{
		if (cop1[count] >= 'A' && cop1[count] <= 'Z')
			cop1[count] += 32;
		if (cop2[count] >= 'A' && cop2[count] <= 'Z')
			cop2[count] += 32;
		if (cop1[count] != cop2[count])
		{
			num = cop1[count] - cop2[count];
			free(cop1);
			free(cop2);
			return (num);
		}
		count++;
	}
	free(cop1);
	free(cop2);
	return (0);
}

