void multiplyMatrix(int rows1, int cols1, int** matrix1, int rows2, int cols2, int** matrix2, int** result) {
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
}

void addMatrix(int rows, int cols, int** matrix1, int** matrix2, int** result) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}

void findMinElementIndex(int rows, int cols, int** matrix, int *minRow, int *minCol) {
    int min = matrix[0][0];
    *minRow = 0;
    *minCol = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                *minRow = i;
                *minCol = j;
            }
}

void multiplyMatrix(int rows, int cols, int** matrix1, int** matrix2, int** result) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < rows; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
}

int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}
