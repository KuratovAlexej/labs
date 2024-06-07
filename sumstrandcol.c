#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sumRowsColumns(int **matrix, int N, int M) {
    printf("Суммы строк:\n");
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++) {
            rowSum += matrix[i][j];
        }
        printf("Строка %d: %d\n", i + 1, rowSum);
    }
    
    printf("\nСуммы столбцов:\n");
    for (int j = 0; j < N; j++) {
        int colSum = 0;
        for (int i = 0; i < M; i++) {
            colSum += matrix[i][j];
        }
        printf("Столбец %d: %d\n", j + 1, colSum);
    }
}
void NumToFile(FILE *file, int num) {
    if (num % 35 == 0)
        fputs("СЕМЬПЯТЬ ", file);
    else if (num % 7 == 0)
        fputs("СЕМЬ ", file);
    else if (num % 5 == 0)
        fputs("ПЯТЬ ", file);
    else
        fprintf(file, "%d ", num);
}

int **createRandomMatrix(int rows, int cols) {
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    return matrix;
}

void print_matrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" %2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    clock_t t_start, t_end;
    t_start = clock();
    int N, M;
    double duration;
    FILE *input = fopen("input.txt", "w");
    FILE *output = fopen("output.txt", "w");
    if (!input || !output) {
        printf("Ошибка при открытии файлов\n");
        return 1;
    }
    printf("Введите количество случайных чисел матрицы (N): ");
    scanf("%d", &N);
    printf("Введите количество столбцов матрицы (M): ");
    scanf("%d", &M);
    int rows = N / M;
    int **matrix1 = createRandomMatrix(rows, M);
    int **matrix2 = createRandomMatrix(rows, M);
    int **matrix3 = createRandomMatrix(rows, M);
    
    fprintf(input, "Матрица 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(input, "%d ", matrix1[i][j]);
        }
        fprintf(input, "\n");
    }

    fprintf(input, "Матрица 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(input, "%d ", matrix2[i][j]);
        }
        fprintf(input, "\n");
    }

    fprintf(input, "Матрица 3:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(input, "%d ", matrix3[i][j]);
        }
        fprintf(input, "\n");
    }

    fprintf(output, "Матрица 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            NumToFile(output, matrix1[i][j]);
        }
        fprintf(output, "\n");
    }

    fprintf(output, "Матрица 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            NumToFile(output, matrix2[i][j]);
        }
        fprintf(output, "\n");
    }

    fprintf(output, "Матрица 3:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            NumToFile(output, matrix3[i][j]);
        }
        fprintf(output, "\n");
    }

    fprintf(input, "\n");
    printf("Матрица 1:\n");
    print_matrix(matrix1, rows, M);
    sumRowsColumns(matrix1, rows, M);
    printf("Матрица 2:\n");
    print_matrix(matrix2, rows, M);
    sumRowsColumns(matrix2, rows, M);
    printf("Матрица 3:\n");
    print_matrix(matrix3, rows, M);
    sumRowsColumns(matrix2, rows, M);
    fprintf(output, "\n");
    fclose(input);
    fclose(output);
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(matrix3[i]);
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
    t_end = clock();
    duration = (double)(t_end - t_start) / CLOCKS_PER_SEC;
    printf("Расчётное время = %f\n", duration);
    return 0;
}