#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hex[20];
    int len, dec = 0, i, value;
  

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
  

    len = strlen(hex);

        for (i = 0; i < len; i++) {
            if (hex[i] >= '0' && hex[i] <= '9')
                value = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
               value = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
               value = hex[i] - 'a' + 10;

   dec += value * pow(16, len - i - 1);
    }
  

         printf("Decimal = %d", dec);

    return 0;
}
