/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ftmain.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:35:17 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 02:39:56 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int number = 0;
    int *nbr1 = &number;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    int *********nbr9 = &nbr8;

    ft_ultimate_ft(nbr9);

    char digit;
    int temp = *********nbr9;

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