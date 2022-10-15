#include <stdio.h>

void nextDate(int *year, int *month, int *day);

struct date { int month; int day; int year; };

int main(void) {
    struct date date;
    int year, month, day;

    printf("Enter the date of today in a format of year month day\n");
    scanf("%d %d %d", &year, &month, &day);
    nextDate(&year, &month, &day);
    printf("Tommorow will be: %d.%d.%d", year, month, day);

    return 0;
}

void nextDate(int *year, int *month, int *day) {
    int daysPerMonth[12] = {31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    *day += 1;
    if ((*month == 2) && (*day == 29)) {
        if (*year % 400 == 0 || (*year % 100 != 0 && *year % 4 == 0)) {
            daysPerMonth[1] = 29;
        }
    }
    if (*day > daysPerMonth[*month - 1]) {
        *day = 1;
        *month += 1;
        if (*month > 12) {
            *month = 1;
            *year += 1;
        }
    }
}

