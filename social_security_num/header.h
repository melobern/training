/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:51:21 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/09 15:25:42 by mbernard         ###   ########.fr       */
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
void		print_lines(long long cop_num, long long key);
void		ft_municipality(char *str, long long key);
void		ft_birth_rate(char *str, long long key);
void		ft_year(char *str, long long key);
void		ft_month(char *str, long long key);
void		ft_town(char *str, long long key);
char		*convert(char **av);
char		**ft_split(char *str, char *charset);
long long	ft_atoi(char *str);
int			ft_strlen(char *str);
int			int_len(long long num);
#endif
