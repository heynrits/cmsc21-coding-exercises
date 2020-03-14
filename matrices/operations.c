#include <stdlib.h>

// Adds two matrices of the same size
int** add_matrices(int** A, int** B, int rows, int columns) {
    int** sum = (int**)malloc(rows * sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        sum[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    return sum;
}

// Subtracts two matrices of the same size
int** subtract_matrices(int** A, int** B, int rows, int columns) {
    int** diff = (int**)malloc(rows * sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        diff[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    return diff;
}

// Multiplies two matrices given that the number of columns of A is equal to the number of rows in B
int** multiply_matrices(int** A, int rowsA, int columnsA, int** B, int rowsB, int columnsB) {
    // Number of colums of A must be equal to the number of rows in B
    if (columnsA != rowsB)
        return NULL;

    int** matrix_product = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsB; i++) {
        matrix_product[i] = (int*)malloc(rowsB* sizeof(int));
        for (int j = 0; j < columnsB; j++) {
            matrix_product[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int x = 0; x < columnsA; x++) {
            for (int j = 0; j < columnsB; j++) {
                matrix_product[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    return matrix_product;
}

// Transposes the NxM matrix with given rows and columns into MxN
int** transpose_matrix(int** matrix, int rows, int columns) {
    int** transposed_matrix = (int**)malloc(columns * sizeof(int*));

    for (int i = 0; i < columns; i++) {
        transposed_matrix[i] = (int*)malloc(rows * sizeof(int));
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }

    return transposed_matrix;
}