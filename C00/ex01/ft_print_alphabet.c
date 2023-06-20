/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:03:00 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:26 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    alpha;

    alpha = 'a';
    while (alpha <= 'z')
    {
        write(1, &alpha, 1);
        alpha++;
    }
}