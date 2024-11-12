#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_calendar(int month, int year) {
    struct tm time_info = {0};
    time_info.tm_year = year - 1900;
    time_info.tm_mon = month - 1;

    mktime(&time_info);
    
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    int first_day = time_info.tm_wday;
    int days_in_month = 31;

    switch (month) {
        case 4: case 6: case 9: case 11: days_in_month = 30; break;
        case 2: 
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                days_in_month = 29;
            else
                days_in_month = 28;
            break;
    }

    for (int i = 0; i < first_day; i++) {
        printf("    ");
    }

    for (int i = 1; i <= days_in_month; i++) {
        printf("%3d ", i);
        if ((first_day + i) % 7 == 0)
            printf("\n");
    }

    printf("\n");
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    print_calendar(month, year);
    return 0;
}
