/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabetmain.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 03:01:26 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:29 by marlengo         ###   ########.fr       */
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
int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}