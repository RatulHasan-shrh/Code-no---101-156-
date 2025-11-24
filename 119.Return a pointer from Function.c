#include <stdio.h>
#include <stdlib.h>

// Function 1: return pointer using malloc (SAFE)
int* createArray(int size) {
    int *arr = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    return arr;   // returning pointer
}

// Function 2: return pointer to static variable (SAFE)
int* getStaticValue() {
    static int x = 500;   // static lives after function ends
    return &x;
}

int main() {

    
         int *ptr = createArray(5);

    printf("Array values: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
  
    free(ptr); 
  

    int *p = getStaticValue();
    printf("Static value: %d\n", *p);

    return 0;

  
}
