#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[33];
    int decimal = 0;

   printf("Enter a binary number: ");
    scanf("%s", binary);

  

    int length = strlen(binary);

         for(int i = 0; i < length; i++) {
            if(binary[i] == '1') {
               decimal += pow(2, length - i - 1);
        }
              
        else if(binary[i] != '0') {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

             printf("Decimal of %s is: %d\n", binary, decimal);

    return 0;
}
