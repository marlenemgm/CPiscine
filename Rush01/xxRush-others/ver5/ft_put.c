/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <nablanco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:59:52 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/09 16:32:25 by nablanco         ###   ########          */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int		ft_is_valid_row(int **board, int row)
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
	return (count == board[row][4]);
}

int		ft_is_valid_col(int **board, int col)
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
	return (count == board[4][col]);
}

int		ft_validate_board(int **board)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (!ft_is_valid_row(board, i) || !ft_is_valid_col(board, i))
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

int		main(int argc, char **argv)
{
	int **board;
	int clues[16];
	int i;
	int j;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			clues[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}

	if (j != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	board = (int **)malloc(sizeof(int *) * 5);
	i = 0;
	while (i < 5)
	{
		board[i] = (int *)malloc(sizeof(int) * 5);
		i++;
	}

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			board[i][4] = clues[i];
		else if (i < 8)
			board[4][7 - i] = clues[i];
		else if (i < 12)
			board[11 - i][0] = clues[i];
		else
			board[0][i - 12 + 1] = clues[i];
		i++;
	}

	ft_fill_board(board, clues, 0, 0);

	i = 0;
	while (i < 5)
	{
		free(board[i]);
		i++;
	}
	free(board);

	return (0);
}