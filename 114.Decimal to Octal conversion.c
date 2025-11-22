#include <stdio.h>

int main() {
    int dec, oct = 0, place = 1;

 printf("Enter a decimal number: ");
   scanf("%d", &dec);
  

         while (dec != 0) {
            oct += (dec % 8) * place;
            dec /= 8;
            place *= 10;
    }

      printf("Octal = %d", oct);

    return 0;
}
