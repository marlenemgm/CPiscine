/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:06:29 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 04:45:29 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void    ft_sort_int_tab(int *tab, int size)
{
    int elem = 0;
    int swap = 1;
    int extra;

    while (swap)
    {
        swap = 0;
        elem = 0;
        while (elem < size -1)
        {
            if (tab[elem] > tab[elem +1])
            {
                extra = tab[elem];
                tab[elem] = tab[elem + 1];
                tab[elem + 1] = extra;
                swap = 1;
            }
            elem++;
        }
    }
}