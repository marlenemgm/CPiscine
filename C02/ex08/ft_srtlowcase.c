/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:47:34 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:33:24 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char *ft_str_strlowcase(char *str)
{
    int index;
    index = 0;

    while (str[index] != '\0')
    {
        if (str[index] >= 'A' && str[index] <= 'Z')
        {
            str[index] = str[index] - 'A' + 'a';
        }
        index++;
    }
    return (str);     
}