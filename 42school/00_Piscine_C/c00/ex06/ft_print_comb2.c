/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:33:06 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 12:49:33 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb2(void){
    char a;
    char b;

    a = '0' -1;
    while(++a <= '9'){
        b = a;
        while(++b <= '9'){
            if(a != '0' || b != '1'){
                ft_putchar(',');
            }
            if(a != '0' || b != '1'){
                ft_putchar(' ');
            }
            ft_putchar(a);
            ft_putchar(b);
        }
    }
}

int main(void){
    ft_print_comb2();
    ft_putchar('\n');
}
