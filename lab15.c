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
    printf("Vvedite natural'noye chislo N: ");
    scanf("%d", &N);
    printf("chislo v pryamom poryadke: ");
    pr(N);
    printf("\n");
    printf("chislo v obratnom poryadke: ");
    obr(N); 
    printf("\n"); 
    return 0; 
}