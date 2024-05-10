#include <stdio.h>
#include <string.h>
typedef struct{
    char name[20];
    char surname[20];
    int year;
} humen;
void inputMass(humen mass[], int n){
    for(int i = 0; i < n; i++){
        printf("Vvedite imya, familiyu i god rozhdeniya dlya cheloveka %d:\n", i+1);
        scanf("%s %s %d", mass[i].name, mass[i].surname, &mass[i].year);
    }
}
void copyMass(humen m1[], humen m2[], int n){
    for(int i = 0; i < n; i++){
        m2[i] = m1[i]; 
    } 
}
void sortYear(humen mass[], int n){
    for(int i =0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if (mass[j].year > mass[j + 1].year){
                humen temp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = temp;
            }
        }
    }
}
void printMass(const humen mass[], int n){
    for(int i = 0; i < 4; i++){
        printf("%s %s %d\n", mass[i].name, mass[i].surname, mass[i].year);
    }
}
int main(){
    humen mass1[4], mass2[4];
    inputMass(mass1,4);
    copyMass(mass1, mass2, 4);
    sortYear(mass2,4);
    printf("Otsortirovannyy massiv:\n"); 
    printMass(mass2, 4); 

    return 0;
}