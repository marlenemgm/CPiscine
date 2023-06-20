/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:13:11 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 02:48:21 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    destsize;
    unsigned int    totalsize;

    destsize = 0;
    while (*dest != '\0')
    {
        dest++;
        destsize++;
    }
    totalsize = destsize;
    while (*src != '\0')
    {
        if ((int)(size) - (int)(totalsize) > 1)
        {
            *dest = *src;
            dest++;
        }
        totalsize++;
        src++;
    }
    if (size && size >= destsize)
        *dest = '\0';
    return (totalsize);
}