#include <stdio.h>
#include <stdlib.h>

struct Data {
    int size;
    int arr[];  // flexible array member
};

int main() {
    int n;
           printf("Enter array size: ");
           scanf("%d", &n);

  struct Data *d = malloc(sizeof(struct Data) + n * sizeof(int));
  d->size = n;

          printf("Enter elements:\n");
          for (int i = 0; i < n; i++)
          scanf("%d", &d->arr[i]);

    printf("You entered:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", d->arr[i]);

    free(d);
    return 0;
}
