#include <stdio.h>

int sumDiagonal(int rows, int cols, int matrix[rows][cols], int* SumGlav, int* SumPob) {

    *SumGlav = 0;
    *SumPob = 0;

    for (int i = 0; i < rows; i++) {
        *SumGlav += matrix[i][i];
        *SumPob += matrix[i][rows - i - 1];
    }

    return 0;
}

int main() {
    int rows, cols;
    printf("Введите количество строк и столбцов матрицы: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Матрица должна быть квадратной!\n");
        return 1;
    }

    int matrix[rows][cols];
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int SumGlav, SumPob;
    if (sumDiagonal(rows, cols, matrix, &SumGlav, &SumPob) == 0) {
        printf("Сумма элементов на главной диагонали: %d\n", SumGlav);
        printf("Сумма элементов на побочной диагонали: %d\n", SumPob);
    }

    return 0;
}