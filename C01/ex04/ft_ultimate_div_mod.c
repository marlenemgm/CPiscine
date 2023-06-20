/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 02:50:52 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 02:56:39 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void    ft_ultimate_div_mod(int *a, int *b)
{
    int aextra;
    int bextra;

    aextra = *a;
    bextra = *b;
    *a = (*a / *b);
    *b = (*a % *b);
}