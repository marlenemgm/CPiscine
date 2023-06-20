/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 03:29:31 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:32 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putchar(char pn)
{
    write(1, &pn, 1);
}

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_putchar('P');
    }
    else
    {
        ft_putchar('N');
    }
}