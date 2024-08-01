/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:32:55 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/31 14:13:42 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX 1000

void print_matrix(char *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            write(STDOUT_FILENO, &matrix[i * cols + j], 1);
        }
        write(STDOUT_FILENO, "\n", 1);
    }#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print ".";
}
}
print "\n";
}
}

void find_largest_square(char *matrix, int rows, int cols) {
    int *dp = (int *)malloc(rows * cols * sizeof(int));
    if (dp == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    int max_side = 0;
    int max_i = 0, 
    int max_j = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                dp[i * cols + j] = (matrix[i * cols + j] == 'o') ? 1 : 0;
            } else if (matrix[i * cols + j] == 'o') {
                int min_val = dp[(i-1) * cols + j];
                if (dp[i * cols + (j-1)] < min_val) min_val = dp[i * cols + (j-1)];
                if (dp[(i-1) * cols + (j-1)] < min_val) min_val = dp[(i-1) * cols + (j-1)];
                dp[i * cols + j] = min_val + 1;
            } else {
                dp[i * cols + j] = 0;
            }

            if (dp[i * cols + j] > max_side) {
                max_side = dp[i * cols + j];
                max_i = i;
                max_j = j;#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX 1000

void print_matrix(char *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            write(STDOUT_FILENO, &matrix[i * cols + j], 1);
        }
        write(STDOUT_FILENO, "\n", 1);
    }
}

void find_largest_square(char *matrix, int rows, int cols) {
    int *dp = (int *)malloc(rows * cols * sizeof(int));
    if (dp == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    int max_side = 0;
    int max_i = 0, max_j = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                dp[i * cols + j] = (matrix[i * cols + j] == 'o') ? 1 : 0;
            } else if (matrix[i * cols + j] == 'o') {
                int min_val = dp[(i-1) * cols + j];
                if (dp[i * cols + (j-1)] < min_val) min_val = dp[i * cols + (j-1)];
                if (dp[(i-1) * cols + (j-1)] < min_val) min_val = dp[(i-1) * cols + (j-1)];
                dp[i * cols + j] = min_val + 1;
            } else {
                dp[i * cols + j] = 0;
            }

            if (dp[i * cols + j] > max_side) {
                max_side = dp[i * cols + j];
                max_i = i;
                max_j = j;
            }
        }
    }

    for (int i = max_i; i > max_i - max_side; i--) {
        for (int j = max_j; j > max_j - max_side; j--) {
            matrix[i * cols + j] = 'x';
        }
    }

    free(dp);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(STDOUT_FILENO, "Usage: ./bsq <filename>\n", 24);
        exit(EXIT_FAILURE);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    char buffer[MAX];
    int bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read < 0) {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }
    buffer[bytes_read] = '\0';
    close(fd);

    int rows = 0;
    int cols = 0;
    int in_row = 0;

    for (int i = 0; i < bytes_read; i++) {
        if (buffer[i] == '\n') {
            rows++;
            if (cols == 0) {
                cols = i;
            }
            in_row = 0;
        } else {
            in_row++;
        }
    }
    if (cols == 0) {
        cols = in_row;
    }

    find_largest_square(buffer, rows, cols);
    print_matrix(buffer, rows, cols);

    return 0;
}
            }
        }
    }

    for (int i = max_i; i > max_i - max_side; i--) {
        for (int j = max_j; j > max_j - max_side; j--) {
            matrix[i * cols + j] = 'x';
        }
    }

    free(dp);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(STDOUT_FILENO, "Usage: ./bsq <filename>\n", 24);
        exit(EXIT_FAILURE);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    char buffer[MAX];
    int bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read < 0) {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }
    buffer[bytes_read] = '\0';
    close(fd);

    int rows = 0;
    int cols = 0;
    int in_row = 0;

    for (int i = 0; i < bytes_read; i++) {
        if (buffer[i] == '\n') {
            rows++;
            if (cols == 0) {
                cols = i;
            }
            in_row = 0;
        } else {
            in_row++;
        }
    }
    if (cols == 0) {
        cols = in_row;
    }

    find_largest_square(buffer, rows, cols);
    print_matrix(buffer, rows, cols);

    return 0;
}