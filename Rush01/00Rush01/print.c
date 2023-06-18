/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:41:33 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/11 21:46:06 by nablanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_board(int **board)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(board[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_fill_board(int **board, int *clues, int row, int col)
{
	int i;

	if (row == 4)
	{
		if (ft_validate_board(board))
			ft_print_board(board);
		return;
	}

	if (col == 4)
	{
		ft_fill_board(board, clues, row + 1, 0);
		return;
	}

	if (board[row][col] != 0)
	{
		ft_fill_board(board, clues, row, col + 1);
		return;
	}

	i = 1;
	while (i <= 4)
	{
		board[row][col] = i;
		ft_fill_board(board, clues, row, col + 1);
		board[row][col] = 0;
		i++;
	}
}
