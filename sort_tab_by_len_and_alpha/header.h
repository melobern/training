#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void    sort_char_tab(char **tab);
void    sort_len_tab(char **tab);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	**ft_split(char *str, char *charset);

#endif
