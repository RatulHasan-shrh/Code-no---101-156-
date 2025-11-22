#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *token;

 printf("Enter a string: ");
 gets(str);

   
            token = strtok(str, " ");

            printf("Sub-strings:\n");

       while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
