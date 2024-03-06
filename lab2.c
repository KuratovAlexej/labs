#include <stdio.h> 
 
int main() {
  int size;
  printf("Vvedite razmernoct': ");
  scanf("%d", &size);
  double matrix1[size][size]; 
  double sum1 = 0, sum2 = 0;
  printf("Vvedite matritsy:\n");
  for (int i = 0; i < size; i++) { 
    for (int j = 0; j < size; j++) {
      scanf("%lf", &matrix1[i][j]); 
    } 
  } 
   
  for (int i = 0; i < size; i++) { 
    sum1 += matrix1[i][i]; // Сумма главной диагонали
    sum2 += matrix1[i][size-i-1]; // Сумма побочной диагонали
  }
  printf("Summa glavnoy diagonali: %0.2lf\n", sum1); 
  printf("Summa pobochnoy diagonali: %0.2lf\n", sum2); 
  int result[size][size];
  for(int i=0; i<size; i++) {
    for(int j=0; j<size; j++) {
      result[i][j] = 0;
      for (int k=0; k<size; k++) {
        result[i][j] += matrix1[i][k] * matrix1[k][j];
      }
    }
  }
  printf("Kvadrat matritsy:\n");
  for(int i=0; i<size; i++) {
    for(int j=0; j<size; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0; 
}