/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 08:00:25 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 10:11:49 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return (index);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int index = 0;

    if (size == 0)
    {
        return (ft_strlen(src));
    }

    while (src[index] != '\0' && index < size - 1)
    {
        dest[index] = src[index];
        index++;
    }

    dest[index] = '\0';
    return (ft_strlen(src));
}