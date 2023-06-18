/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <nablanco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:59:52 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/09 16:32:25 by nablanco         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_is_valid_row(int **board, int row, int clue)
{
	int i;
	int count;
	int max_height;

	i = 1;
	count = 1;
	max_height = board[row][0];
	while (i < 4)
	{
		if (board[row][i] > max_height)
		{
			count++;
			max_height = board[row][i];
		}
		i++;
	}
	return (count == clue);
}

int		ft_is_valid_col(int **board, int col, int clue)
{
	int i;
	int count;
	int max_height;

	i = 1;
	count = 1;
	max_height = board[0][col];
	while (i < 4)
	{
		if (board[i][col] > max_height)
		{
			count++;
			max_height = board[i][col];
		}
		i++;
	}
	return (count == clue);
}

int		ft_validate_board(int **board, int *clues)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (!ft_is_valid_row(board, i, clues[i]) || !ft_is_valid_col(board, i, clues[i + 4]))
			return (0);
		i++;
	}
	return (1);
}

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
		if (ft_validate_board(board, clues))
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

int		main(int argc, char **argv)
{
	int		**board;
	int		*clues;
	int		i;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	board = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		board[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}

	clues = (int *)malloc(sizeof(int) * 16);
	i = 0;
	while (i < 16)
	{
		clues[i] = atoi(argv[i + 1]);
		i++;
	}

	ft_fill_board(board, clues, 0, 0);

	i = 0;
	while (i < 4)
	{
		free(board[i]);
		i++;
	}
	free(board);
	free(clues);

	return (0);
}