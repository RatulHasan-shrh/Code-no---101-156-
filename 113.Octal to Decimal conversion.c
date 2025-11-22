#include <stdio.h>
#include <math.h>


int main() {
    int oct, dec = 0, i = 0, digit;
  

    printf("Enter an octal number: ");
    scanf("%d", &oct);

        while (oct != 0) {
           digit = oct % 10;
           dec += digit * pow(8, i);
           i++;
           oct /= 10;
    }

    printf("Decimal = %d", dec);

    return 0;
}
