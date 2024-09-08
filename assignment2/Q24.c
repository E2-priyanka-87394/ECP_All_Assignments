#include <stdio.h>

int day_of_week(int d, int m, int y) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    if (m < 3) {
        y -= 1;
    }

    int result = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

    return result;
}

int main() {
    int day, month, year;

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    const char* days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int day_index = day_of_week(day, month, year);
    printf("The day of the week for %d/%d/%d is: %s\n", day, month, year, days[day_index]);

    return 0;
}
