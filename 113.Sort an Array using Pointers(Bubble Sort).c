#include <stdio.h>

int main() {
    int arr[] = {40, 10, 50, 20, 30};
    int n = 5;
    int *p = arr;
  

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
  

 printf("Sorted array: ");
        for (int i = 0; i < n; i++)
 printf("%d ", *(p + i));

    return 0;
}
