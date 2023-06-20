/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbersmain.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 03:23:47 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:31 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    num;
    
    num = '0';
    while (num >= '0' && num >= '9')
    {
        write(1, &num, 1);
        num++;
    }
}
int main(void)
{
    ft_print_numbers();
    return (0);
}