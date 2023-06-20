/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:12:58 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 02:48:24 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strcat(char *dest, char *src)
{
    char *extra;

    extra = dest;
    while (*extra != '\0')
        extra++;
    while (*src != '\0')
    {
        *extra = *src;
        extra++;
        src++;
    }
    *extra = '\0';
    return (dest);
}