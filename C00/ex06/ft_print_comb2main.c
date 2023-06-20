/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:17 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:37 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char a, char b, char c, char d)
    {
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, " ", 1);
        write(1, &c, 1);
        write(1, &d, 1);
        if (a != '9' || b != '8' || c != '9' || d != '9')
        {
            write(1, ", ", 2);
        }
   }
void    ft_print_comb2(void)
    {
        char a = '0';
        while (a <= '9')
        {
            char b = '0';
            while (b <= '8')
            {
                char c = '0';
                while (c <= '9')
                {
                    char d = '0';
                    while (d <= '9')
                    {
                        ft_putchar(a, b, c, d);
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
    }
int main(void)
    {
        ft_print_comb2();
        return (0);
    }