/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 05:05:57 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:55 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strcpy(char *dest, char *src)
{
    int index;

    index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}