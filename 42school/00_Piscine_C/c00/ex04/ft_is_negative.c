/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:16:30 by oreznikov         #+#    #+#             */
/*   Updated: 2022/01/08 11:25:27 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_is_negative(int n){
    if(n >= 0){
        ft_putchar(80);
    } else {
        ft_putchar(78);
    }
}

// int main(void){
//     ft_is_negative(42);
//     ft_putchar('\n');
// }
