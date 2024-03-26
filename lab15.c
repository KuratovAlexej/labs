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
    scanf("%d", &N);
    pr(N);
    printf("\n");
    obr(N); 
    printf("\n"); 
    return 0; 
}