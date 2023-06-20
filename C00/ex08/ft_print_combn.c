/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:48:05 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:42 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char f, char s)
{
    write(1, &f, 1);
    write(1, &s, 1);
}
void    ft_print_combn(int n)
{
    char    f;
    char    s;

    if (n == 2)
    {
        f = '0';
        while (f <= '9')
        {
            s = f + 1;
            while (s <= '9')
            {
                ft_putchar(f, s);
                if(!(f == '8' && s == '9'))
                    write(1, ", ", 2);
                s++;
            }
            f++;
        } 
    }
}