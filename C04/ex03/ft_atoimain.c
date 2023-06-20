/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoimain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:05:12 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 04:13:43 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int ft_space(char c)
{
    if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || 
    c == ' ')
        return (1);
    else
        return (0);
}
int ft_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
int ft_atoi(char *str)
{
    int index = 0;
    int sign = 1;
    int result = 0;

    while (str[index] != '\0' && ft_space(str[index]))
    index++;
    while (str[index] != '\0' && (str[index] == '-' || str[index] == '+'))
    {
        if (str[index] == '-')
            sign *= -1;
        index++;
    }
    while (ft_num(str[index]))
    {
        result = (result * 10) + (str[index] - '0');
        index++;
    }
    return result * sign;
}
int main()
{
    char str[] = " ---+--+13234ab567";
    int result = ft_atoi(str);

    printf("Resultado: %d\n", result);

    return 0;
}