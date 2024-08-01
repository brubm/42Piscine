/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:52:59 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/20 15:54:05 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 4

typedef struct {
    int *up;
    int *down;
    int *left;
    int *right;
} Hints;

int **board;

void print_board() {
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            char c = board[i][j] + '0';
            write(1, &c, 1);
            if (j < SIZE - 1)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int is_valid(int row, int col, int num) {
    int i = 0;
    while (i < SIZE) {
        if (board[row][i] == num || board[i][col] == num)
            return 0;
        i++;
    }
    return 1;
}

int check_visibility(int *line, int hint) {
    int count = 0, max_height = 0;
    int i = 0;
    while (i < SIZE) {
        if (line[i] > max_height) {
            max_height = line[i];
            count++;
        }
        i++;
    }
    return count == hint;
}

int check_all_visibility(Hints hints) {
    int *line = malloc(SIZE * sizeof(int));
    if (!line) {
        write(1, "Falha de alocação\n", 19);
        exit(1);
    }

    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            line[j] = board[i][j];
            j++;
        }
        if (!check_visibility(line, hints.left[i])) {
            free(line);
            return 0;
        }
        j = 0;
        while (j < SIZE) {
            line[j] = board[i][SIZE - j - 1];
            j++;
        }
        if (!check_visibility(line, hints.right[i])) {
            free(line);
            return 0;
        }
        j = 0;
        while (j < SIZE) {
            line[j] = board[j][i];
            j++;
        }
        if (!check_visibility(line, hints.up[i])) {
            free(line);
            return 0;
        }
        j = 0;
        while (j < SIZE) {
            line[j] = board[SIZE - j - 1][i];
            j++;
        }
        if (!check_visibility(line, hints.down[i])) {
            free(line);
            return 0;
        }
        i++;
    }
    free(line);
    return 1;
}

int solve(int row, int col, Hints hints) {
    if (row == SIZE)
        return check_all_visibility(hints);

    if (col == SIZE)
        return solve(row + 1, 0, hints);

    int num = 1;
    while (num <= SIZE) {
        if (is_valid(row, col, num)) {
            board[row][col] = num;
            if (solve(row, col + 1, hints))
                return 1;
            board[row][col] = 0;
        }
        num++;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 17) {
        write(1, "Erro: são necessários 16 argumentos\n", 37);
        return 1;
    }

    Hints hints;
    hints.up = malloc(SIZE * sizeof(int));
    hints.down = malloc(SIZE * sizeof(int));
    hints.left = malloc(SIZE * sizeof(int));
    hints.right = malloc(SIZE * sizeof(int));
    if (!hints.up || !hints.down || !hints.left || !hints.right) {
        write(1, "Falha de alocação\n", 19);
        return 1;
    }

    int i = 0;
    while (i < SIZE) {
        hints.up[i] = atoi(argv[i + 1]);
        hints.down[i] = atoi(argv[i + 5]);
        hints.left[i] = atoi(argv[i + 9]);
        hints.right[i] = atoi(argv[i + 13]);
        i++;
    }

    board = malloc(SIZE * sizeof(int *));
    if (!board) {
        write(1, "Falha de alocação\n", 19);
        return 1;
    }
    for (i = 0; i < SIZE; i++) {
        board[i] = malloc(SIZE * sizeof(int));
        if (!board[i]) {
            write(1, "Falha de alocação\n", 19);
            return 1;
        }
    }

    if (solve(0, 0, hints)) {
        print_board();
    } else {
        write(1, "Sem solução\n", 13);
    }

    for (i = 0; i < SIZE; i++) {
        free(board[i]);
    }
    free(board);
    free(hints.up);
    free(hints.down);
    free(hints.left);
    free(hints.right);

    return 0;
}
