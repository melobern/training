/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:13:57 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/06 19:14:16 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_strcpy_two(char *dest, char *src, char *d2, char *s2);
void	ft_strcpy(char *dest, char *src);
void	sort_char_tab(char **tab);
void	sort_len_tab(char **tab);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	**ft_split(char *str, char *charset);

#endif
