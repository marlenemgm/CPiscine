/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:13:03 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 02:48:23 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char    *extra;
    unsigned int    index;

    index = 0;
    extra = dest;
    
    while (*extra != '\0')
        extra++;
    while (*src != '\0' && index < nb)
    {
        *extra++ = *src++;
        index++;
    }
*extra = '\0';
return (dest);
}