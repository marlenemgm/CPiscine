/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memorymain.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:41:24 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/19 10:01:19 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putaddr(void *addr)
{
	const char	*hex = "0123456789abcdef";
	unsigned long	address = (unsigned long)addr;

	if (address >= 16)
		ft_putaddr((void *)(address / 16));
	ft_putchar(hex[address % 16]);
}

void	ft_print_content(unsigned char *pointer, unsigned int size)
{
	const char	*hex = "0123456789abcdef";
	unsigned int	index;

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
	ft_putchar(' ');
	ft_putchar('|');
	ft_putchar(' ');
	index = 0;
	while (index < 16 && index < size)
	{
		if (pointer[index] >= 32 && pointer[index] <= 126)
			ft_putchar(pointer[index]);
		else
			ft_putchar('.');
		index++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	unsigned char	*pointer;

	pointer = (unsigned char *)addr;
	index = 0;
	while (index < size)
	{
		ft_putaddr(&pointer[index]);
		ft_putchar(':');
		ft_print_content(&pointer[index], size - index);
		ft_putchar('\n');
		index += 16;
	}
	return (addr);
}

int	main(void)
{
	char memory[] = "Hello, World! This is a test.";

	ft_print_memory(memory, sizeof(memory) - 1);

	return 0;
}