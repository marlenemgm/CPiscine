/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:34:06 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 08:00:02 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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