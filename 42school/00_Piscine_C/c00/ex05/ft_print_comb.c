/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:36:54 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 12:32:50 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb(void){
    char d1;
    char d2;
    char d3;

    d1 = '0' - 1;
    while (++d1 <= '9'){
        d2 = d1;
        while(++d2 <= '9'){
            d3 = d2;
            while (++d3 <= '9'){
                    if(d1 != '0' || d2 != '1' || d3 != '2'){
                        ft_putchar(',');
                    }
                    if(d1 != '0' || d2 != '1' || d3 != '2'){
                        ft_putchar(' ');
                    }
                    ft_putchar(d1);
                    ft_putchar(d2);
                    ft_putchar(d3);
                }
            }
        }
    }

int main(void){
    ft_print_comb();
    ft_putchar('\n');
}
