/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:40:52 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 06:42:27 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}