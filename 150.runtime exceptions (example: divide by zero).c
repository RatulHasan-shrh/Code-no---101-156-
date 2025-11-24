#include <stdio.h>

int main() {
    int a = 10, b = 0;
    printf("Demonstrating runtime error...\n");

    int c = a / b;  
    printf("Result: %d\n", c);

    return 0;
}
