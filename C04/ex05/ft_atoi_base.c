/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:50:31 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 05:05:19 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}
int ft_getvalue(char c, char *base)
{
    int ind0 = 0;
    while (base[ind0] != '\0' && base[ind0] != c)
        ind0++;
    return ind0;
}
int ft_charstr(char c, char *set)
{
    int ind0 = 0;
    while (set[ind0] != '\0')
    {
        if (set[ind0] == c)
            return 1;
        ind0++;
    }
    return 0;
}
int ft_basevalid(char *base)
{
    int ind0 = 0;
    int ind1 = 0;
    int once = 0;
    if (ft_charstr('+', base) || ft_charstr('-', base) ||
    ft_charstr(' ', base))
        return 0;
    while (base[ind0] != '\0')
    {
        while (base[ind1] != '\0')
        {
            if (base[ind0] == base[ind1] && once == 0)
                once = 1;
            else if (base[ind0] == base[ind1] && once != 0)
                return 0;
            ind1++;
        }
        ind1 = 0;
        once = 0;
        ind0++;
    }
    return ft_strlen(base) > 1 ? 1 : 0;
}
int ft_atoi_base(char *str, char *base)
{
    int ind0 = 0;
    int sign = 1;
    int result = 0;
    if (!ft_basevalid(base))
        return 0;
    while (str[ind0] != '\0' && (str[ind0] == '\f' || str[ind0] == '\n' ||
    str[ind0] == '\r' || str[ind0] == '\t' || str[ind0] == '\v' || 
    str[ind0] == ' '))
        ind0++;
    while (str[ind0] != '\0' && (str[ind0] == '-' || str[ind0] == '+'))
    {
        if (str[ind0] == '-')
            sign *= -1;
        ind0++;
    }
    while (ft_charstr(str[ind0], base))
    {
        result = (result * ft_strlen(base)) + ft_getvalue(str[ind0], base);
        ind0++;
    }
    return result * sign;
}