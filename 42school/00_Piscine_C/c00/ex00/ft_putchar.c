/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreznikov <oreznikov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:54:22 by oreznikov         #+#    #+#             */
/*   Updated: 2021/10/24 22:54:55 by oreznikov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// #include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

// int main (void) {
//     ft_putchar('f');
// 	ft_putchar('\n');
// }
