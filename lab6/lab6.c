#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *opFile1, *opFile2;
    char line[100];
    int year;
    opFile1 = fopen("t.txt", "r");// Открываем файл для чтения
    opFile2 = fopen("t1.txt", "w");// Открываем файл для записи отфильтрованных данных
    return 0;
}