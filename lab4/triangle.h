double perimeter(double a, double b, double c) {
    return a + b + c;
}
double square(double a, double b, double c) {
    double s = perimeter(a, b, c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}