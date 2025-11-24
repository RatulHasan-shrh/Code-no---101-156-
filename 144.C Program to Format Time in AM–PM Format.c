#include <stdio.h>

int main() {
    int h, m, s;
    char period[3];

    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    if (h >= 12) {
        strcpy(period, "PM");
        if (h > 12) h -= 12;
    } else {
        strcpy(period, "AM");
        if (h == 0) h = 12;
    }

    printf("Time in 12-hour format = %02d:%02d:%02d %s\n", h, m, s, period);

    return 0;
}
