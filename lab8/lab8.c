#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char name[20], surname[20], gender[20];
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
