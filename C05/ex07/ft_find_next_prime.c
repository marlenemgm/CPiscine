/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:46:11 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:47:56 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    int ind = 2;
    while (ind*ind <= nb)
    {
        if (nb % ind == 0)
            return (0);
        ind++;
    }
    return (1);
}
int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb))
        nb++;
    return (nb);
}