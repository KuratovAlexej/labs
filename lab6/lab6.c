#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *opFile1, *opFile2;
    char line[100];
    int year;
    opFile1 = fopen("t.txt", "r");// Открываем файл для чтения
    opFile2 = fopen("t1.txt", "w");// Открываем файл для записи отфильтрованных данных
    while (fgets(line, sizeof(line), opFile1)) {
        sscanf(line, "%*s %*s %*s %d", &year);
        if (year > 1980) {
            fputs(line, opFile2);
        }
    }
    fclose(opFile1);
    fclose(opFile2);
    printf("Sortirovka zavershena, dannyye zapisany v fayl t1.txt.\n");
    return 0;
}