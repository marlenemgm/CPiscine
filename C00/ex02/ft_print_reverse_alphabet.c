/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 02:57:41 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:28 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    rev;
    
    rev = 'z';
    while (rev >= 'a')
    {
        write(1, &rev, 1);
        rev--;
    }
}