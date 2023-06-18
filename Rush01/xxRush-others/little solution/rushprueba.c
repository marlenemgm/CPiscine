/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: nablanco <nablanco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:59:52 by nablanco          #+#    #+#             */
/*   Updated: 2023/06/09 16:32:25 by nablanco         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

void print_board(int board[SIZE][SIZE]) 
{
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE) {
            char c = '0' + board[i][j];
            write(STDOUT_FILENO, &c, 1);
            write(STDOUT_FILENO, " ", 1);
            j++;
        }
        write(STDOUT_FILENO, "\n", 1);
        i++;
    }
}

int is_valid(int board[SIZE][SIZE], int row, int col, int height) 
{
    int i = 0;
    while (i < SIZE)
    {
        if (i != row && board[i][col] == height)
            return 0;
        i++;
    }

    int j = 0;
    while (j < SIZE)
    {
        if (j != col && board[row][j] == height)
            return 0;
        j++;
    }

    return 1;
}

int solve_skyscraper(int board[SIZE][SIZE], int row, int col) 
{
    if (row >= SIZE)
    {
        print_board(board);
        return 1;
    }
    
    int next_row = row;
    int next_col = col + 1;
    if (next_col >= SIZE)
    {
        next_row++;
        next_col = 0;
    }

    if (board[row][col] != 0)
        return solve_skyscraper(board, next_row, next_col);

    int height = 1;
    while (height <= SIZE)
    {
        if (is_valid(board, row, col, height)) {
            board[row][col] = height;
            if (solve_skyscraper(board, next_row, next_col)) 
                return 1;
            board[row][col] = 0;
        }
        height++;
    }

    return 0;
}

int main()
{
    int board[SIZE][SIZE] = {0};
    solve_skyscraper(board, 0, 0);
    return 0;
}