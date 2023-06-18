#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

int combination[SIZE * SIZE];

void initialize_combination(const char *args) {
    int i = 0;
    const char *ptr = args;
    while (*ptr) {
        if (*ptr != ' ') {
            combination[i] = *ptr - '0';
            i++;
        }
        ptr++;
    }
}

int get_combination_value(int row, int col) {
    return combination[row * SIZE + col];
}

void write_char(char c) {
    write(STDOUT_FILENO, &c, 1);
    write(STDOUT_FILENO, " ", 1);
}

void write_newline() {
    write(STDOUT_FILENO, "\n", 1);
}

int is_valid(int board[SIZE][SIZE], int row, int col, int height) {
    int i = 0;
    while (i < SIZE) {
        if (i != row && board[i][col] == height)
            return 0;
        i++;
    }

    int j = 0;
    while (j < SIZE) {
        if (j != col && board[row][j] == height)
            return 0;
        j++;
    }

    return 1;
}

int solve_skyscraper(int board[SIZE][SIZE], int row, int col) {
    if (row >= SIZE) {
        int i = 0;
        int j;
        while (i < SIZE) {
            j = 0;
            while (j < SIZE) {
                write_char('0' + board[i][j]);
                j++;
            }
            write_newline();
            i++;
        }
        return 1;
    }

    int next_row = row;
    int next_col = col + 1;
    if (next_col >= SIZE) {
        next_row++;
        next_col = 0;
    }

    if (board[row][col] != 0)
        return solve_skyscraper(board, next_row, next_col);

    int height = 1;
    while (height <= SIZE) {
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

int main(int argc, char *argv[]) {
    if (argc < 2) {
        write(STDOUT_FILENO, "Usage: ./rush01.c <combination>\n", 32);
        return 1;
    }

    initialize_combination(argv[1]);

    int board[SIZE][SIZE] = {0};
    solve_skyscraper(board, 0, 0);
    return 0;
}