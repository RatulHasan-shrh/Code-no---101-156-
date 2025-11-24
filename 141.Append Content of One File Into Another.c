#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "a");
    char ch;

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

    fclose(f1);
    fclose(f2);

    printf("Append complete.");
    return 0;
}
