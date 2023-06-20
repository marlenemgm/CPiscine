/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:12:06 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:37:28 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_iterative_factorial(int nb)
{
    int ind;

    ind = nb;
    if (nb < 0)
    {
        return (0);
    }
    else if (nb == 0 || nb == 1)
    {
        return (1);
    }
    while (ind > 1)
    {
        nb = nb * (ind - 1);
        ind--;
    }
    return nb;
}