/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:19:33 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 03:43:16 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return(count);
}
void ft_putnbr(int num)
{
    char digit;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }

    if (num == 0)
    {
        digit = '0';
        write(1, &digit, 1);
    }
    else
    {
        int temp = num;
        int divisor = 1;
        while (temp != 0)
        {
            divisor *= 10;
            temp /= 10;
        }
        divisor /= 10;

        while (divisor != 0)
        {
            digit = '0' + (num / divisor);
            write(1, &digit, 1);
            num %= divisor;
            divisor /= 10;
        }
    }
}

int main(void)
{
    char *str = "Hello, world. Hola, Mundo";
    int len = ft_strlen(str);

    ft_putnbr(len);
    write(1, "\n", 1);

    return 0;
}