#include <stdio.h>
#include <stdlib.h>
double* opermatrix(double** m1, double** m2, int n, char st);
int main() { 
    int n, i, j; 
    char st; 
 
    printf("size: "); 
    scanf("%d", &n); 
    double** m1 = (double**)malloc(n * sizeof(double*));
   double** m2 = (double**)malloc(n * sizeof(double*));
   for (int i = 0; i < n; i++) {
       m1[i] = (double*)malloc(n * sizeof(double));
       m2[i] = (double*)malloc(n * sizeof(double));
   }
 
    printf("Vvedite elementy pervoy matritsy:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%lf", &m1[i][j]); 
 
    printf("Vvedite elementy vtoroy matritsy:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%lf", &m2[i][j]); 
 
    printf("\nVvedite operatsiyu('+','-','*'): "); 
    scanf(" %c", &st);
 
    if (st == '+') { 
        sum(n, m1, m2); 
    } else if (st == '-') { 
        minus(n, m1, m2); 
    } else if (st == '*') { 
        impr(n, m1, m2); 
    } else { 
        printf("Nevernaya operatsiya.\n"); 
    } 
 
    return 0; 
} 