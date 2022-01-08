/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_alphabet.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 01:52:27 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 02:06:26 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_printchar_alphabet(void) {
    int  i;
    char l;

    i = 97;
    while(i <= 122){
        l = i;
        ft_putchar(l);
        i++;
    }
}

// int main(void) {
//     ft_printchar_alphabet();
//     ft_putchar('\n');
// }
