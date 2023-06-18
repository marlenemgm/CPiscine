/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:50:10 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/11 22:09:34 by nablanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_board(int **board);

void	ft_fill_board(int **board, int *clues, int row, int col);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_is_valid_row(int **board, int row);

int		ft_is_valid_col(int **board, int col);
	
int		ft_validate_board(int **board);

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
