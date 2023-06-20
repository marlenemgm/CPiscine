/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:58:38 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 08:31:42 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putstr(char  *str)
{
    while (*str)
    {   
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_putstr(argv[0]);
    ft_putstr("\n");
    return (0);
}