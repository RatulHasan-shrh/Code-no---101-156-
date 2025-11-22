#include <stdio.h>
#include <string.h>


int main() {
    char str1[200], str2[100], result[300];
    int pos, i, j;

            printf("Enter the main string: ");
            gets(str1);

                printf("Enter the string to insert: ");
                gets(str2);

    printf("Enter the position to insert at: ");
    scanf("%d", &pos);

   
    for (i = 0; i < pos; i++) {
        result[i] = str1[i];
    }

   
         for (j = 0; str2[j] != '\0'; j++) {
              result[i + j] = str2[j];
    }

   
      int k = pos;
    while (str1[k] != '\0') {
        result[i + j] = str1[k];
        k++;
        i++;
    }

    result[i + j] = '\0'; // Null terminate

    printf("Resulting string: %s", result);

    return 0;
}
