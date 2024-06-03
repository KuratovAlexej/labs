#include <stdio.h>

#define MAX(arr, n, max) {\
  max = arr[0];\
    for (int i = 1; i < n; ++i) {\
        if (arr[i] > max) {\
            max = arr[i];\
        }\
    }\
}

#define AVR(arr, n, avr) { \
    double sum = 0; \
    for (int i = 0; i < n; i++) { \
        sum += arr[i]; \
    } \
    avr = sum / n; \
}

int main() {
    int n;
    printf("Введите количество чисел: ");
    scanf("%d", &n);

    double numbers[n];
    double max_num;
    double avr;

    printf("Введите %d чисел через пробел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    MAX(numbers, n, max_num);
    AVR(numbers, n, avr);

    printf("Максимальное число: %.2f\n", max_num);
    printf("Среднее арифметическое число: %.2f\n", avr);

    return 0;
}