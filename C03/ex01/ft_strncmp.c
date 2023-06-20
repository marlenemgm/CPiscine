/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:12:55 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 11:05:22 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int index;
    if (n == 0)
        return (0);
    index = 0;
    while (s1[index] == s2[index] && s1[index] && s2[index] && index < n)
        index++;
    if (index == n)
        index--;
    return (s1[index] - s2[index]);
}