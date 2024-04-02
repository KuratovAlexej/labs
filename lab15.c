#include <stdio.h>
void pr(int n) {
    if ( n < 10) {
        printf("%d ", n);
    } else {
        pr(n / 10);
        printf("%d ", n % 10);
    }
}
void obr(int n) { 
    printf("%d ", n % 10); 
    if (n >= 10) { 
        obr(n / 10); 
    } 
} 
 
int main() { 
    int N;
    printf("Vvedite naturalnoye chislo N: ");
    scanf("%d", &N);
    printf("Chislo v pryamom poryadke: ");
    pr(N);
    printf("\n");
    printf("Chislo v obratnom poryadke: ");
    obr(N); 
    printf("\n"); 
    return 0; 
}