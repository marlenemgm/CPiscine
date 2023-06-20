/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativemain_float.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 05:36:07 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:33 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putchar(char pn)
{
    write(1, &pn, 1);
}

void ft_is_negative(float n)
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
    char input[20];

    while (1) // Bucle infinito
    {
        int bytesRead = read(0, input, sizeof(input) - 1);
        if (bytesRead > 1) // Verificar que se haya introducido más que solo un salto de línea
        {
            input[bytesRead - 1] = '\0';  // Reemplazar el salto de línea por el carácter nulo

            // Convertir la entrada a flotante
            float num = 0;
            int sign = 1;
            int i = 0;

            if (input[i] == '-' || input[i] == '+')
            {
                sign = (input[i] == '-') ? -1 : 1;
                i++;
            }

            int valid = 1;
            int decimalPointCount = 0;
            while (input[i] != '\0')
            {
                if (input[i] == '.' || input[i] == ',')
                {
                    if (decimalPointCount > 0)
                    {
                        valid = 0;
                        break;
                    }
                    decimalPointCount++;
                    i++;
                    continue;
                }
                else if (input[i] < '0' || input[i] > '9')
                {
                    valid = 0;
                    break;
                }
                num = num * 10 + (input[i] - '0');
                i++;
            }

            if (valid)
            {
                if (decimalPointCount > 0)
                {
                    float factor = 1;
                    while (decimalPointCount > 0)
                    {
                        factor /= 10;
                        decimalPointCount--;
                    }
                    num *= factor;
                }
                num *= sign;
                ft_is_negative(num);
            }
            else
            {
                write(1, "Enter valid number\n", 20);
            }
        }
        else if (bytesRead == 1) // Si solo se ingresó un salto de línea
        {
            write(1, "Enter valid number\n", 20);
        }
    }

    return 0;
}