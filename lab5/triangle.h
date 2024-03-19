#include <stdio.h>
#include <stdlib.h>

double* opermatrix(double** matrix1, double** matrix2, int n, char st) {
    double* result = (double*)malloc(n * n * sizeof(double));
    switch (st) {
        case '+':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i * n + j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            break;
        case '-':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i * n + j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            break;
    return result;
}
