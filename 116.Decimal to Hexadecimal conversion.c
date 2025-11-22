#include <stdio.h>

int main() {
    int dec, i = 0;
    char hex[20];

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    while (dec != 0) {
        int rem = dec % 16;

      

            if (rem < 10)
               hex[i] = rem + '0';
            else
               hex[i] = rem - 10 + 'A';

   dec /= 16;
        i++;
    }

  
    hex[i] = '\0';

    printf("Hexadecimal = ");

    
  for (int j = i - 1; j >= 0; j--)
     printf("%c", hex[j]);

    return 0;
}
