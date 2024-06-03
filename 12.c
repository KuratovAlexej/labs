#include<stdio.h>
/*
Объявить массив данных типа double размером 3 на 3. 
Ввести с консоли его значения, вывести на консоль сумму его элементов,
расположенных на главной диагонали и сумму элементов, расположенных на 
побочной диагонали.
Объявить массив данных типа int размером 2 на 2. 
Ввести с консоли его значения, вывести на консоль квадрат данной матрицы.
*/
int main(int argc, char *argv[])
{
    double array[3][3]={0};
    double glavn= 0 , pob = 0; 
    for (int i=0;i<3;i++)
  {
  for (int j=0;j<3;j++)
    {
  printf("Write matrix with space");
    printf("array[%d][%d] = ", i, j);
    scanf("%lf", &array[i][j]);

    }
    }
    for (int i=0; i<3; i++){
  glavn += array[i][i];
  pob += array[i][3-i-1];
}
printf("\nSum glavnoy diag: %2lf\n", glavn);
printf("\nSum pobochnoy diag: %2lf\n", pob);


double arr[2][2];
int p[2][2];
for (int m=0; m<2; m++){
  for (int k=0; k<2; k++){
    printf("Write matrix with space");
    printf("arr[%d][%d] = ", m, k);
    scanf("%lf", &arr[m][k]);
  }
}

    
for (int m=0; m<2; m++){
  for (int k=0; k<2; k++){
    p[m][k]=0;
    for (int b=0; b<2; b++) {
        p[m][k] += arr[m][b] * arr[b][k];
    }
  }
}

printf("Proizvedenie: \n");
for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
      printf("%d ", p[i][j]);
    }
    printf("\n");
}
return 0;
}