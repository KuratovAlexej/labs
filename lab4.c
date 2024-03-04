#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a + b + c;
}
double square(double a, double b, double c) {
    double s = perimeter(a, b, c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(){
	double a, b, c;
	printf("Vvedite storony treugolnika: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Treugolnik s takimi storonami ne sushestvuyet.\n");
	} else {
        printf("Perimeter treugolnika: %.2lf\n", perimeter(a, b, c));
        printf("Square treugolnika: %.2lf\n", square(a, b, c));
	}
}