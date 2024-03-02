#include <stdio.h> 
 
int main() { 
  double matrix1[3][3]; 
  double sum1 = 0, sum2 = 0;
  printf("Vvedite matritsy 3x3:\n");
  for (int i = 0; i < 3; i++) { 
    for (int j = 0; j < 3; j++) {
       
      scanf("%lf", &matrix1[i][j]); 
    } 
  } 
   
  for (int i = 0; i < 3; i++) { 
    sum1 += matrix1[i][i]; // Сумма главной диагонали
    sum2 += matrix1[i][2-i]; // Сумма побочной диагонали
  }
  printf("Summa glavnoy diagonali: %0.2lf\n", sum1); 
  printf("Summa pobochnoy diagonali: %0.2lf\n", sum2); 
  int matrix2[2][2];
  int result[2][2];
  printf("Vvedite matritsy 2x2:\n");
  for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
      result[i][j] = 0;
      for (int k=0; k<2; k++) {
        result[i][j] += matrix2[i][k] * matrix2[k][j];
      }
    }
  }
  printf("Kvadrat matritsy:\n");
  for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0; 
}