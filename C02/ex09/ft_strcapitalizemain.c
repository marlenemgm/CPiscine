/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizemain.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:06:44 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 07:30:52 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char *ft_strcapitalize(char *str)
{
    int index;

    index = 1;
    if (str[index - 1] >= 'a' && str[index - 1] <= 'z')
        str[index - 1] = str[index - 1] - ('a' - 'A');
    while (str[index])
    {
        if (!((str[index - 1] >= 'A' && str[index - 1] <= 'Z') ||
              (str[index - 1] >= 'a' && str[index - 1] <= 'z') ||
              (str[index - 1] >= '0' && str[index - 1] <= '9')))
        {
            if (str[index] >= 'a' && str[index] <= 'z')
                str[index] = str[index] - ('a' - 'A');
        }
        else
        {
            if (str[index] >= 'A' && str[index] <= 'Z')
                str[index] = str[index] + ('a' - 'A');
        }
        index++;
    }
    return (str);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    char str[] = "saludis, coOiAment tu vas ? 42mots quara38nte-deux; cinquante+et+un";

    ft_strcapitalize(str);
    ft_putstr(str);
    write(1, "\n", 1);
    return 0;
}