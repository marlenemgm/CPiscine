/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativemain.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 04:05:06 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:34 by marlengo         ###   ########.fr       */
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
    ft_putchar('\n');
}
int main(void)
{
    while (1)
    {
        char buffer[50];
        ssize_t bytesRead = read(0, buffer, sizeof(buffer) - 1);
        if (bytesRead > 0)
        {
            buffer[bytesRead - 1] = '\0'; // Reemplace emptyline
            int num = 0;
            int sign = 1;
            int i = 0;

            // sign verify
            if (buffer[i] == '+' || buffer[i] == '-')
            {
                if (buffer[i] == '-')
                    sign = -1;
                i++;
            }

            // change char for int
            int decimal = 0; // Flag to detect decimal
            int validInput = 1; // Flag to track if the input is valid
            while (buffer[i] != '\0')
            {
                if (buffer[i] >= '0' && buffer[i] <= '9')
                {
                    num = num * 10 + (buffer[i] - '0');
                    if (decimal)
                    {
                        validInput = 0;
                        break;
                    }
                    i++;
                }
                else if (buffer[i] == '.' || buffer[i] == ',')
                {
                    decimal = 1;
                    i++;
                }
                else
                {
                    validInput = 0;
                    break;
                }
            }

            if (validInput)
            {
                num *= sign;
                ft_is_negative(num);
            }
            else
            {
                write(1, "Enter valid int number\n", 23);
            }
        }
    }

    return 0;
}