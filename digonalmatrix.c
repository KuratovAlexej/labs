#include <stdio.h>


int isSquareMatrix(int rows, int cols) {
    return rows == cols;
}


int sumMainDiagonal(int size, int matrix[size][size]) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    
    return sum;
}


int sumSecondaryDiagonal(int size, int matrix[size][size]) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += matrix[i][size - i - 1];
    }
    
    return sum;
}

int main() {
    int rows, cols;
    printf("Введите количество строк и столбцов матрицы: ");
    scanf("%d %d", &rows, &cols);
    
    if (!isSquareMatrix(rows, cols)) {
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
    
    int mainDiagonalSum = sumMainDiagonal(rows, matrix);
    int secondaryDiagonalSum = sumSecondaryDiagonal(rows, matrix);
    
    printf("Сумма элементов на главной диагонали: %d\n", mainDiagonalSum);
    printf("Сумма элементов на побочной диагонали: %d\n", secondaryDiagonalSum);
    
    return 0;
}