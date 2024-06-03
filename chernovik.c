#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPRESSION_LEN 100

double calculate(char *expression) {
    char *token, *rest = expression;
    double result = 0.0, value;
    int is_negative = 0;

    token = strtok_r(rest, " ", &rest);
    while (token != NULL) {
        if (token[0] == '+') {
            is_negative = 0;
        } else if (token[0] == '-') {
            is_negative = !is_negative;
        } else {
            value = atof(token);
            if (is_negative) {
                value = -value;
            }
            result += value;
        }
        token = strtok_r(NULL, " ", &rest);
    }

    return result;
}

int main() {
    char expression[MAX_EXPRESSION_LEN];

    printf("Введите арифметическое выражение: ");
    fgets(expression, sizeof(expression), stdin);

    double result = calculate(expression);
    printf("Результат: %.2f\n", result);

    return 0;
}