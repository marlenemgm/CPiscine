/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:13:07 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 02:48:22 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    index;

    if (*to_find == '\0')
        return (str);
    index = 0;
    while (str[index] != '\0')
    {
        if (str[index] == to_find[0])
        {
            unsigned int sub_index = 0;
            while (str[index + sub_index] == to_find[sub_index])
            {
                if (to_find[sub_index + 1] == '\0')
                    return (&str[index]);
                sub_index++;
            }
        }
        index++;
    }
    return (NULL);
} 