#include <stdio.h>

int main() {
      long num = 987654321;
      char str[50];

 sprintf(str, "%ld", num);   
        printf("String = %s\n", str);
    return 0;
}
