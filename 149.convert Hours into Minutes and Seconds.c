#include <stdio.h>

int main() {
    int hour, min, sec;

    printf("Enter hours: ");
    scanf("%d", &hour);

    min = hour * 60;
    sec = hour * 3600;

    printf("%d hours = %d minutes = %d seconds\n", hour, min, sec);

    return 0;
}
