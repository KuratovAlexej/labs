#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double calculator(char* vyrazhenie){
    char* token;
    char* ntoken = NULL;
    double otvet = 0;
    token = strtok(vyrazhenie, "");
    while (token != NULL) {
         if (strcmp(token, "+") == 0) {
            token = strtok(NULL, " ");
            otvet += atof(token);
        } else if (strcmp(token, "-") == 0) {
            token = strtok(NULL, " ");
            otvet -= atof(token);
        } else {
            otvet += atof(token);
        }
        token = strtok(NULL, " ");
    }
    return otvet;
}
int main(){
    char phrase[100];
    printf("Vvedite vyrazheniye: ");
    fgets(phrase, 100, stdin);
    phrase[strlen(phrase) - 1] = '\0';
    double result = calculate(phrase);
    printf("Result: %.2lf\n", result);
    return 0;
}
