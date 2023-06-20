/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 05:17:55 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:54 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int index;

    index = 0;
    while (index < n && src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    while (index < n)
    {
        dest[index] = '\0';
        index++;
    }
    return (dest);
}