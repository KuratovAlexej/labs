#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void space(char *phrase, char *result) { 
    for (int i = 0; phrase[i] != '\0'; i++) { 
        if (phrase[i] == '+' || phrase[i] == '-') { 
            if(i > 0 && phrase[i-1] != ' ') 
                *result++ = ' '; 
            *result++ = phrase[i]; 
            if(phrase[i+1] != ' ') 
                *result++ = ' '; 
        } else { 
            *result++ = phrase[i]; 
        } 
    } 
    *result = '\0';  
} 
double calculator(char* vyrazhenie){
    char* token;
    double otvet = 0;
    token = strtok(vyrazhenie, " ");
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
    char result_phrase[200]; // для выражения с пробелами
    printf("Vvedite vyrazheniye: ");
    fgets(phrase, 100, stdin);
    phrase[strlen(phrase) - 1] = '\0';
    space(phrase, result_phrase); // добавляем пробелы
    printf("Iskhodnoye: %s\n", phrase);
    printf("C probelami: %s\n", result_phrase);
    double result = calculator(result_phrase);
    printf("Result: %.2lf\n", result);
    return 0;
}

