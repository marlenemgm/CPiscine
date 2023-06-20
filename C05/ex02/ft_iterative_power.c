/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:37:47 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:39:28 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
    {
        int result = 1;
        while (power > 0)
        {
            result *= nb;
            power--;
        }
        return (result);
    }
}