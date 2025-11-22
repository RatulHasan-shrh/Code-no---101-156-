#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

   
    while (str1[i] != '\0' && str2[i] != '\0') {

        if (str1[i] < str2[i]) {
            printf("str1 comes before str2 (str1 < str2)");
            return 0;
        }

          
        else if (str1[i] > str2[i]) {
            printf("str1 comes after str2 (str1 > str2)");
            return 0;
        }
        i++;
    }

   
    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Both strings are equal.");
      
    else if (str1[i] == '\0')
        printf("str1 comes before str2 (shorter string).");
      
    else
        printf("str1 comes after str2.");
  

    return 0;
}
