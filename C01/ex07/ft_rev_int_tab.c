/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 03:43:53 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 04:02:13 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void    ft_rev_int_tab(int *tab, int size)
{
    int init;
    int end;
    int extra;

    init = 0;
    end = size - 1;

    while (init < end)
    {
        extra = tab[init];
        tab[init] = tab[end];
        tab[end] = extra;

        init++;
        end--;
    }
}