/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:39:35 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:40:45 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}