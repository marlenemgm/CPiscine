/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:01:44 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:51 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_lowercase(char *str)
{
    int is_lower;

    while (*str != '\0')
    {
        is_lower = (*str >= 'a' && *str <= 'z');

        if (!(is_lower))
            return (0);
        
        str++;
    }
    return (1);     
}