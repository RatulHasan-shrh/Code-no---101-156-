#include <stdio.h>

int main() {
    FILE *f1 = fopen("source.txt", "r");
    FILE *f2 = fopen("dest.txt", "w");
    char ch;

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

    fclose(f1);
    fclose(f2);

    printf("File copied successfully.");
    return 0;
}
