/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:57:36 by mbernard          #+#    #+#             */
/*   Updated: 2023/09/08 23:20:05 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_municipality(char *str, long long key)
{
	int		x;
	char	copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strcpy(copy, str);
	copy[7] = '0';
	copy[8] = '0';
	copy[9] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("MUNICIPALITY :\n");
	while (x++ < 1000)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
		{
			ft_putnbr(cop_num);
			ft_putchar(' ');
			ft_putchar((key / 10) + '0');
			ft_putchar((key % 10) + '0');
			ft_putchar('\n');
		}
		cop_num += 1000;
	}
}

void	ft_birth_rate(char *str, long long key)
{
	int		x;
	char	copy[13];
	long long	cop_num;
	long long	key_two;

	ft_strcpy(copy, str);
	copy[10] = '0';
	copy[11] = '0';
	copy[12] = '0';
	cop_num = ft_atoi(copy);
	x = 0;
	ft_putstr("BIRTH RATE :\n");
	while (x++ < 1000)
	{
		key_two = 97 - (cop_num % 97);
		if (key_two == key)
		{
			ft_putnbr(cop_num);
			ft_putchar(' ');
			ft_putchar((key / 10) + '0');
			ft_putchar((key % 10) + '0');
			ft_putchar('\n');
		}
		cop_num += 1;
	}
}

/*
function boucleVille (x) {
    for (let i = 0; i < 99; i++) {
        x += 1000000;
        var villeCorseA = ntS.slice(0,5) + "2A" + ntS.slice(7,13);
        var villeCorseB = ntS.slice(0,5) + "2B" + ntS.slice(7,13);
        xVille = parseInt(x.toString().slice(5,7))
        cle2 = (97 - (x % 97));
      	if (cle2  === cleConnue){
            cle2 < 10 ? cle2 = "0" + cle2.toString():0;
        	if (xVille == 19){
            	document.write(villeCorseA + " " + cle2 + (" <== ESSAIE Ã‡A : SÃ›REMENT UN.E CORSE !!!").fontcolor("red") +"<BR>");
                }
            else if (xVille == 18){
            	document.write(villeCorseB + " " + cle2 + (" <== ESSAIE Ã‡A : SÃ›REMENT UN.E CORSE !!!").fontcolor("red") +"<BR>");
                }
            else {
        		document.write(x + " " + cle2 +  "<BR>");
      		};}
      	else{};
      }
};
function boucleMois (x) {
    for (let i = 0; i < 12; i++) {
        x += 100000000;
        cle2 = (97 - (x % 97));
      	if (cle2  === cleConnue){
            cle2 < 10 ? cle2 = "0" + cle2.toString():0;
        	document.write(x + " " + cle2 +  "<BR>");
      		}
      	else{};
      }
};
function boucleAnnee (x) {
    for (let i = 0; i < 99; i++) {
        x += 10000000000;
        cle2 = (97 - (x % 97));
      	if (cle2  === cleConnue){
            cle2 < 10 ? cle2 = "0" + cle2.toString():0;
        	document.write(x + " " + cle2 +  "<BR>");
      		}
      	else{};
      }
};

function boucleGenre (x) {
    for (let i = 0; i < 2; i++) {
        x += 1000000000000;
        cle2 = (97 - (x % 97));
      	if (cle2  === cleConnue){
            cle2 < 10 ? cle2 = "0" + cle2.toString():0;
        	document.write((x + " " + cle2).fontcolor("red") +  "<BR>");
      		}
      	else{};
      }
};
*/
