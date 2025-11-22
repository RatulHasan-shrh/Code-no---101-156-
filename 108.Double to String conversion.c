#include <stdio.h>

int main() {
     double d = 123.456789;
     char str[50];

        sprintf(str, "%lf", d); 

                 printf("String = %s\n", str);
    return 0;
}

