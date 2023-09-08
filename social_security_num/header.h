/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:51:21 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/08 21:20:12 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_strcpy(char *dest, char *src);
void		ft_strncpy(char *dest, char *src, unsigned int n);
void		ft_strcat(char *dest, char *src);
void		ft_putnbr(long long nb);
char		*convert(char **av);
char		**ft_split(char *str, char *charset);
long long	ft_atoi(char *str);
int			ft_strlen(char *str);
int			int_len(long long num);
#endif
