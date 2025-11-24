#include <stdio.h>

int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");
    char c1, c2;
    int pos = 0, mismatch = 0;

    while ((c1 = fgetc(f1)) != EOF || (c2 = fgetc(f2)) != EOF) {
        pos++;
        if (c1 != c2) {
            printf("Mismatch at position %d\n", pos);
            mismatch = 1;
        }
    }

    if (!mismatch)
        printf("Files are identical.");

    fclose(f1);
    fclose(f2);
    return 0;
}
