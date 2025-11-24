#include <stdio.h>

int main() {
    int arr[] = {10, 50, 20, 80, 40};
    int n = 5;
    int *ptr = arr;

 int largest = *ptr;

    for (int i = 1; i < n; i++) {
     if (*(ptr + i) > largest) {
           largest = *(ptr + i);
       
        }
    }
  

   printf("Largest element = %d\n", largest);
    return 0;
}
