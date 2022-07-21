/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:33:06 by oreznikov         #+#    #+#             */
/*   Updated: 2022/02/13 20:31:13 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb2(void){
    int  a;
    char b;

    for(a = 0; a <= 9; ++a){
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
            ft_putchar(' ');
            ft_putchar(a);
            ft_putchar(b);
        }
    }
}

int main(void){
        ft_print_comb2();
        ft_putchar('\n');
    return 0;
}
