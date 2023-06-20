/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:34:07 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 04:45:00 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}
int ft_isvalid(char *base)
{
    int ind0;
    int ind1;
    int base_len = ft_strlen(base);

    ind0 = 0;
    if (base_len == 0 || base_len == 1)
        return (0);
    while (base[ind0] != '\0')
    {
        if (base[ind0] == '+' || base[ind0] == '-')
            return (0);
        ind1 = ind0 +1;
        while (base[ind1] != '\0')
        {
            if (base[ind0] == base[ind1])
                return (0);
            ind1++;
        }
        ind0++;
    }
    return (1);
}
void    ft_recursive(int nbr, char *base, int base_len)
{
    if (nbr < 0)
    {
        write(1, "-", 1);
        ft_recursive(-nbr, base, base_len);
    }
    else if (nbr < base_len)
    {
        write(1, &base[nbr], 1);
    }
    else
    {
        ft_recursive(nbr / base_len, base, base_len);
        ft_recursive(nbr % base_len, base, base_len);
    }
}
void    ft_putnbr_base(int nbr, char *base)
{
    if (!ft_isvalid(base))
        return;
    
    int base_len = ft_strlen(base);

    ft_recursive(nbr, base, base_len);
}