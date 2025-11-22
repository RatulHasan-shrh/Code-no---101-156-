#include <stdio.h>

int main() {
    float f = 12.345;
    char str[50];

     
  sprintf(str, "%f", f);  

          printf("String = %s\n", str);
    return 0;
}
