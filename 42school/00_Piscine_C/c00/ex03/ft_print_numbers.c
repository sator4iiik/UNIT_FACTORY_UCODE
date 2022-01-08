/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:05:31 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 11:15:31 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_numbers(void){
    for(int i = 48; i <= 57; i++){
        char d = i;
        ft_putchar(d);
    }
}

// int main(void){
//     ft_print_numbers();
//     ft_putchar('\n');
// }
