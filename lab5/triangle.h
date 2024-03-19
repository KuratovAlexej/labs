#include <stdio.h>
#include <stdlib.h>

double* opermatrix(double** matrix1, double** matrix2, int n, char st) {
    double* result = (double*)malloc(n * n * sizeof(double));
