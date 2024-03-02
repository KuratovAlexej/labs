#include <stdio.h> 
 
int main() { 
  double data[3][3]; 
  double sum1 = 0, sum2 = 0; 
   
  for (int i = 0; i < 3; i++) { 
    for (int j = 0; j < 3; j++) { 
      scanf("%lf", &data[i][j]); 
    } 
  } 
   
  for (int i = 0; i < 3; i++) { 
    sum1 += data[i][i]; // Сумма главной диагонали
    sum2 += data[i][2-i]; // Сумма побочной диагонали
  }
  printf("Summa glavnoy diagonali: %0.2lf\n", sum1); 
  printf("Summa pobochnoy diagonali: %0.2lf\n", sum2); 
 
  return 0; 
}