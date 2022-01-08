/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:41:04 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 11:03:45 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    int  i = 122;
    char l =   0;

    while(i >= 97){
        l = i;
        ft_putchar(l);
        i--;
    }
}

// int main(void){
//     ft_print_reverse_alphabet();
//     ft_putchar('\n');
// }
