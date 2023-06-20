/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:13:17 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 02:48:18 by marlengo         ###   ########.fr       */
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