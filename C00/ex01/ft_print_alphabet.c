/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:03:00 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/18 01:39:05 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    a;
    a = 'a';
    while (a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}