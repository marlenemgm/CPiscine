/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combmain.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:43:28 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:36 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_putchar(a, b, c);
                if (a != '7')
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}