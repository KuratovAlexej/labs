#include <stdio.h> 
#include <math.h> 
 
int main() 
{ 
char ch; 
while(1) 
{ 
int a,b,c,D; 
double x1, x2; 
printf("Введите коэффициенты: "); 
scanf("%d%d%d", &a,&b,&c); 
D = b*b-4*a*c; 
printf("Дискриминант:%d\n", D); 
if (D < 0) { 
printf("Корней нет"); 
} 
if (D == 0) { 
x1= (-b/(2*a)); 
printf("x1 =%.2lf",x1); 
} 
if (D > 0) { 
x1=((-b+sqrt(D))/(2*a)); 
x2=((-b-sqrt(D))/(2*a)); 
printf("x1=%.2lf\nx2=%.2lf",x1,x2); 
} 
 
 printf("\nПродолжить? (y/n): "); 
 scanf(" %c",&ch); 
 if (ch == 'n') break; 
} 
return 0; 
}
