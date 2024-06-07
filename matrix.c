#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void NumToFile(FILE *file, int num){
    if (num % 5 == 0)
    fputs("ПЯТЬ", file);
    else if (num % 7 == 0)
    fputs("СЕМЬ", file);
    else if (num % 35 == 0)
    fputs("СЕМЬПЯТЬ", file);
    else 
    fprintf(file,"%d ", num);
}
void createRandomMatrix(int **matrix, int rows, int cols) {
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }
}
void print_matrix(int** matrix, int rows, int cols) { 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("%.2d ", matrix[i][j]); 
        } 
        printf("\n"); 
    } 
} 
int main(){
    clock_t t_start,t_end;
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
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(M * sizeof(int));
    }
    createRandomMatrix(matrix, rows, M);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < M; j++) {
            NumToFile(input, matrix[i][j]);
        }
        fprintf(input, "\n");
    }
    print_matrix(matrix, rows, M);
    fprintf(output, "\n");
    fclose(input);
    fclose(output);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    t_end = clock(); 
    duration = (t_end - t_start) / (double) CLOCKS_PER_SEC;
    printf("Расчётное время  = %f",duration);
    return 0;
}