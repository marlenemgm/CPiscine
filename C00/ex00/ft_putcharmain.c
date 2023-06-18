/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:04:08 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/18 01:36:15 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char c)
{   
    write(1, &c, 1);
}
int main()
{
    char    c;
    c = 'c';
    ft_putchar(c);
    return (0);
}