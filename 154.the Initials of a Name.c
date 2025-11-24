#include <stdio.h>

int main() {
    char first[20], middle[20], last[20];

    printf("Enter First Middle Last Name: ");
    scanf("%s %s %s", first, middle, last);

    printf("Initials: %c%c%c\n", first[0], middle[0], last[0]);

    return 0;
}
