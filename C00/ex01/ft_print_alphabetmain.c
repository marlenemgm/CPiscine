/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabetmain.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:04:27 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/18 01:42:42 by marlengo         ###   ########.fr       */
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
int main()
{
    ft_print_alphabet();
    return (0);
}