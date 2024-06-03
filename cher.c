#include <stdio.h>
#include <stdlib.h>
double** opermatrix(double** matrix1, double** matrix2, int n, char st);
int main() {
   int n;
   char st;
   printf("size: ");
   scanf("%d", &n);
   double** matrix1 = (double**)malloc(n * sizeof(double*));
   double** matrix2 = (double**)malloc(n * sizeof(double*));
   for (int i = 0; i < n; i++) {
       matrix1[i] = (double*)malloc(n * sizeof(double));
       matrix2[i] = (double*)malloc(n * sizeof(double));
   }
   printf("Vvedite elementy pervoy matritsy:\n");
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           scanf("%lf", &matrix1[i][j]);
       }
   }
   printf("Vvedite elementy vtoroy matritsy:\n");
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           scanf("%lf", &matrix2[i][j]);
       }
   }
   printf("Vvedite operatsiyu('+','-','*'): ");
   scanf(" %c", &st);
   double** result = opermatrix(matrix1, matrix2, n, st);
   printf("Result:\n");
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           printf("%.2lf ", result[i][j]);
       }
       printf("\n");
   }
   free(result);
   for (int i = 0; i < n; i++) {
       free(matrix1[i]);
       free(matrix2[i]);
   }
   free(matrix1);
   free(matrix2);
   return 0;
}