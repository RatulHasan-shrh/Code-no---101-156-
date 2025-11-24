#include <stdio.h>

int main() {
    FILE *src = fopen("in.txt", "r");
    FILE *dest = fopen("out.txt", "w");
    char ch;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("Data transferred.");
    return 0;
}
