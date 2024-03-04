#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a + b + c;
}
double square(double a, double b, double c) {
    double s = perimeter(a, b, c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(int argc, char *argv[])
{
	int a, b, c;
	printf("Vvedite storony treugolnika: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Treugolnik s takimi storonami ne sushestvuyet.\n");
	} else {
        printf("Perimeter treugolnika: %.2lf\n", perimeter(a, b, c));
        printf("Square treugolnika: %.2lf\n", square(a, b, c));
	}
}