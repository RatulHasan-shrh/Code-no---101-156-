#include <stdio.h>

int main() {
    FILE *fp = tmpfile(); 

    if (!fp) {
        printf("Unable to create temp file.");
        return 1;
    }

    fprintf(fp, "Temporary file content.\n");
    printf("Temporary file created successfully.\n");

   
    return 0;
}
