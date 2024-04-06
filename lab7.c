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
void copyMass(humen m1[], humen m2[], int n){
    for(int i = 0; i < n; i++){
        m2[i]=m1[i]; 
    } 
}
void sortYear(humen mass[], int n){
    for(int i =0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if (mass[j].year > mass[j + 1].year){
                humen temp = mass[j];
                mass[j]= mass[j + 1];
                mass[j + 1] = temp;
            }
        }
    }



}
