#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Days(int y1, int m1, int d1, int y2, int m2, int d2) {
    struct tm date1 = {0}, date2 = {0};
    date1.tm_year = y1 - 1900;
    date1.tm_mon = m1 - 1;
    date1.tm_mday = d1;
    date2.tm_year = y2 - 1900;
    date2.tm_mon = m2 - 1;
    date2.tm_mday = d2;
    time_t t1 = mktime(&date1);
    time_t t2 = mktime(&date2);
    return (int)difftime(t2, t1) / (60 * 60 * 24);
}
int main() {
    clock_t t_start = clock();

    FILE* input = fopen("input.txt", "r");
    if (!input) {
        printf("Ошибка открытия\n");
        return 1;
    }
    int year, month, day;
    fscanf(input, "%d %d %d", &year, &month, &day);
    fclose(input);
    time_t now = time(NULL); //текущая дата
    struct tm* current_time = localtime(&now);
    int days = Days(current_time->tm_year + 1900, current_time->tm_mon + 1, current_time->tm_mday, year, month, day);
    printf("Дней до указанной даты: %d\n", days);
    return 0;
}