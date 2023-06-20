/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 05:37:22 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:11:53 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_alpha(char *str)
{
    int is_lower;
    int is_upper;

    while (*str != '\0')
    {
        is_lower = (*str >= 'a' && *str <= 'z');
        is_upper = (*str >= 'A' && *str <= 'Z');

        if (!(is_lower || is_upper))
            return (0);
        
        str++;
    }
    return (1);     
}