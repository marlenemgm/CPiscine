/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:04:05 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 02:33:04 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nbr;
    ft_ft(&nbr);

    char digit;
    int temp = nbr;
    if (temp < 0)
    {
        write(1, "-", 1);
        temp = -temp;
    }
    if (temp == 0)
    {
        digit = '0';
        write(1, &digit, 1);
    }
    else
    {
        while (temp != 0)
        {
            digit = '0' + (temp % 10);
            write(1, &digit, 1);
            temp /= 10;
        }
    }
    write(1, "\n", 1);
    return 0;
}