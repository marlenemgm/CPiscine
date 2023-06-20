/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:41:24 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 10:01:20 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putaddr(void *addr)
{
    const char  *hex;
    unsigned long   address;

    hex = "0123456789abcdef";
    address = (unsigned long)addr;

    if (address >= 16)
        ft_putaddr((void*)(address / 16));
    ft_putchar(hex[address % 16]);
}
void    ft_print_content(unsigned char *pointer, unsigned int size)
{
    const char *hex;
    unsigned int    index;

    hex = "0123456789abcdef";
    index = 0;
    while (index < 16 && index < size)
    {
        ft_putchar(' ');
        ft_putchar(hex[pointer[index] / 16]);
        ft_putchar(hex[pointer[index] % 16]);
        index++;
    }
    while (index < 16)
    {
        ft_putchar(' ');
        ft_putchar(' ');
        ft_putchar(' ');
        index++;
    }
}
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int    index;
    unsigned char   *pointer;

    index = 0;
    pointer = (unsigned char*)addr;
    while (index < size)
    {
        ft_putaddr(&pointer[index]);
        ft_putchar(':');
        ft_print_content(&pointer[index], size - index);
        ft_putchar(' ');
        ft_putchar('|');
        index += 16;
        ft_putchar('\n');
    }
    return (addr);
}