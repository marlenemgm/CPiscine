/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 08:22:20 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 08:40:56 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr_non_printable(char *str)
{
    int index;
    
    index = 0;
    while (str[index] != '\0')
    {
        if (str[index] < ' ' || str[index] > '~')
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[index] / 16]);
            ft_putchar("0123456789abcdef"[str[index] % 16]);
        }
        else
            ft_putchar(str[index]);
        index++;
    }
}