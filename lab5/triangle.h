void sum(int n, double m[n][n], double m1[n][n]) { 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%.1lf ", m[i][j] + m1[i][j]); 
        } 
        printf("\n"); 
    } 
} 
 
void minus(int n, double m[n][n], double m1[n][n]) { 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%.1lf ", m[i][j] - m1[i][j]); 
        } 
        printf("\n"); 
    } 
} 
