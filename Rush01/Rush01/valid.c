/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:21:46 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/11 21:29:56 by nablanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


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
