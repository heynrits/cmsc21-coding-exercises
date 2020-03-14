#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Generates a random NxM matrix given the rows and columns
// The value of elements ranges from 1-100 inclusive
int** random_matrix(int rows, int columns) {
    int** matrix = (int**)malloc(rows * sizeof(int*));

    srand(time(NULL)*time(NULL)); // random seed

    for (int i = 0; i < rows; i++) {
        int* row = (int*)malloc(rows * sizeof(int));
        for (int j = 0; j < columns; j++) {
            row[j] = rand() % 100 + 1; // random number from 1-100
        }
        matrix[i] = row;
    }

    return matrix;
}

// Displays the formatted matrix
void print_matrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j < columns - 1)
                printf("%d, ", matrix[i][j]);
            else
                printf("%d\n", matrix[i][j]);
        }
    }
}