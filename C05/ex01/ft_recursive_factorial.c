/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:46:41 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:37:35 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    else if (nb == 0 || nb == 1)
    {
        return (1);
    }
    else
    {
        return nb * ft_recursive_factorial(nb-1);
    }
}