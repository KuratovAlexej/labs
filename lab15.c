#include <stdio.h>
void obr(int n) { 
    printf("%d ", n % 10); 
    if (n >= 10) { 
        obr(n / 10); 
    } 
} 
 
int main() { 
    int N; 
    scanf("%d", &N); 
    obr(N); 
    printf("\n"); 
    return 0; 
}