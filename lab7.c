#include <stdio.h>
#include <string.h>
typedef struct{
    char name[50];
    char surname[50];
    int year;
} humen;
void inputMass(humen mass[], int n){
    for(int i = 0; i < n; i++){
        printf("Введите имя, фамилию и год рождения для человека %d:\n", i+1);
        scanf("%s %s %d", mass[i].name, mass[i].surname, &mass[i].year);
    }
}
