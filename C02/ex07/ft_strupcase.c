/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 06:11:46 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 06:31:52 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char *ft_str_strupcase(char *str)
{
    int index;
    index = 0;

    while (str[index] != '\0')
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] = str[index] - 'a' + 'A';
        }
        index++;
    }
    return (str);     
}