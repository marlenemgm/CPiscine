/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allrev_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:03:12 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 08:16:35 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int ft_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return (count);
}
void    print_arg(char *arg)
{
    int len;
    int ind;
    
    len = ft_strlen(arg);
    ind = len - 1;
    while (ind >= 0)
    {
        write(1, &arg[ind], 1);
        ind--;
    }
    write(1, "\n", 1);
}
int main(int argc, char **argv)
{
    int ind;

    ind = argc - 1;
    while (ind > 0)
    {
        char *arg = argv[ind];
        print_arg(arg);
        ind--;
    }
    return (0);
}