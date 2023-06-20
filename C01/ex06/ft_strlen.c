/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:11:03 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 03:23:17 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return(count);
}