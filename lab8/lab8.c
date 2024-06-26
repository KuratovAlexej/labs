#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char name[20], surname[30], gender[20];
    int year; 
    double height;
} humen;
char perSort[20]; 
char vtorSort[20];
int compare(const void *a, const void *b) { 
    humen *personA = (humen *)a; 
    humen *personB = (humen *)b; 
    int result = 0;
    if (strcmp(perSort, "name") == 0) { 
        result = strcmp(personA->name, personB->name); 
    } else if (strcmp(perSort, "surname") == 0) { 
        result = strcmp(personA->surname, personB->surname); 
    } else if (strcmp(perSort, "year") == 0) { 
        result = personA->year - personB->year; 
    } else if (strcmp(perSort, "gender") == 0) { 
        result = strcmp(personA->gender, personB->gender); 
    } else if (strcmp(perSort, "height") == 0) { 
        result = (personA->height > personB->height) - (personA->height < personB->height); 
    } 
 
     
    if (result == 0) { 
        if (strcmp(vtorSort, "name") == 0) { 
            result = strcmp(personA->name, personB->name); 
        } else if (strcmp(vtorSort, "surname") == 0) { 
            result = strcmp(personA->surname, personB->surname); 
        } else if (strcmp(vtorSort, "year") == 0) { 
            result = personA->year - personB->year; 
        } else if (strcmp(vtorSort, "gender") == 0) { 
            result = strcmp(personA->gender, personB->gender); 
        } else if (strcmp(vtorSort, "height") == 0) { 
            result = (personA->height > personB->height) - (personA->height < personB->height); 
        } 
    } 
 
    return result; 
} 
int main() { 
    FILE *file; 
    humen people[100];  
    int index = 0;  
    file = fopen("t.txt", "r"); 
    if (file == NULL) { 
        perror("Oshibka pri otkrytii fayla"); 
        return 1; 
    }
    while (fscanf(file, "%s %s %d %s %lf", people[index].name, people[index].surname, &people[index].year, people[index].gender, &people[index].height) == 5) { 
        index++; 
        if (index >= 100) { 
            break; 
        } 
    } 
    fclose(file);  
    printf("Vvedite perviy kriteriy sortirovki (name, surname, year, gender, height): "); 
    scanf("%s", perSort); 
    qsort(people, index, sizeof(humen), compare); 
    for (int i = 0; i < index; i++) { 
        printf("%s %s %d %s %.2f\n", people[i].name, people[i].surname, people[i].year, people[i].gender, people[i].height); 
    } 
    printf("Vvedite vtoroy kriteriy sortirovki (name, surname, year, gender, height): "); 
    scanf("%s", vtorSort); 
    qsort(people, index, sizeof(humen), compare); 
    for (int i = 0; i < index; i++) { 
        printf("%s %s %d %s %.2f\n", people[i].name, people[i].surname, people[i].year, people[i].gender, people[i].height); 
    } 
    return 0;
}
