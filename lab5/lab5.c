#include <stdio.h>
#include <stdlib.h>
#include "triangle.h"
void sum(int n, double m[n][n], double m1[n][n]); 
void minus(int n, double m[n][n], double m1[n][n]); 
void impr(int n, double m[n][n], double m1[n][n]);
int main() { 
    int n, i, j; 
    char st; 
 
    printf("size: "); 
    scanf("%d", &n); 
    double m[n][n], m1[n][n]; 
 
    printf("Vvedite elementy pervoy matritsy:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%lf", &m[i][j]); 
 
    printf("Vvedite elementy vtoroy matritsy:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%lf", &m1[i][j]); 
 
    printf("\nVvedite operatsiyu('+','-','*'): "); 
    scanf(" %c", &st);
 
    if (st == '+') { 
        sum(n, m, m1); 
    } else if (st == '-') { 
        minus(n, m, m1); 
    } else if (st == '*') { 
        impr(n, m, m1); 
    } else { 
        printf("Nevernaya operatsiya.\n"); 
    } 
 
    return 0; 
} 