/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:15:53 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 08:31:39 by marlengo         ###   ########.fr       */
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
    write(1, "\n", 1);
}
int main(int argc, char **argv)
{
	int index;

	index = 0;
	while (++index < argc)
		ft_putstr(argv[argc - index]);
    return (0);
}