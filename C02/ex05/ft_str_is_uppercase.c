/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:03:34 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:50 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_uppercase(char *str)
{
    int is_upper;

    while (*str != '\0')
    {
        is_upper = (*str >= 'A' && *str <= 'Z');

        if (!(is_upper))
            return (0);
        
        str++;
    }
    return (1);     
}