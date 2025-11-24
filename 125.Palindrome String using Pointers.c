#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *left = str;
    char *right = str + strlen(str) - 1;
  

 int isPal = 1;

        while (left < right) {
        if (*left != *right) {
            isPal = 0;
             break;
     }
        left++;
        right--;
    }
  

    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
