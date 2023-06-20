/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:05:30 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:49 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_printable(char *str)
{
    int is_printable;

    while (*str != '\0')
    {
        is_printable = (*str >= ' ' && *str <= '~');

        if (!(is_printable))
            return (0);
        
        str++;
    }
    return (1);     
}