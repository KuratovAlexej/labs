#include <stdio.h> 
#include <time.h> 
#include <string.h> 
#include <stdlib.h> 
void MonthCalendar(int year, int month) {
    struct tm ttime = {0};
    ttime.tm_year = year - 1900;
    ttime.tm_mon = month - 1;
    ttime.tm_mday = 1;
    mktime(&ttime);
    
    printf("\n      %d.%d", year, month); 
    printf("\nПн Вт Ср Чт Пт Сб Вс\n");

    int startDay = ttime.tm_wday - 1;
    if (startDay < 0) {
        startDay = 6;
    }
    for (int i = 0; i < startDay; i++) {
        printf("   ");
    }
    while (ttime.tm_mon == month - 1) {
        int startDay = ttime.tm_wday - 1;
        if (startDay < 0) {
            startDay = 6;
        }
        printf("%2d ", ttime.tm_mday);
        if (startDay == 6) {
            printf("\n");
        }
        ttime.tm_mday++;
        mktime(&ttime);
    }
    printf("\n");
}
 
void YearCalendar(int year) { 
    for (int month = 1; month <= 12; month++) { 
        MonthCalendar(year, month); 
    } 
} 
 
int main() { 
    time_t nowTime = time(NULL); 
    struct tm* now = localtime(&nowTime); 
    char date[11]; 
 
    printf("Введите дату (yyyy.mm.dd / yyyy.mm / yyyy / now): "); 
    scanf("%s", date);  
 
    if (strcmp(date, "now") == 0) { 
        int VDKtime = (now->tm_hour + 10) % 24; 
        printf("Сегодняшняя дата: %d.%d.%d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday); 
        printf("Время по VDK: %d:%d:%d", VDKtime, now->tm_min, now->tm_sec); 
    } else { 
        int day = -1, year = -1, month = -1; 
        sscanf(date, "%d.%d.%d", &year, &month, &day); 
 
        if (day != -1) { 
            struct tm YMD = {0};
            YMD.tm_year = year - 1900;
            YMD.tm_mon = month - 1;
            YMD.tm_mday = day;
            mktime(&YMD);
            int dayOfWeek = YMD.tm_wday; 
            char* weekdays[] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"}; 
            printf("%d.%d.%d - %s", month, day, year, weekdays[dayOfWeek]); 
        } else if (month != -1) { 
            MonthCalendar(year, month); 
        } else { 
            YearCalendar(year); 
        } 
    } 
 
    return 0; 
}