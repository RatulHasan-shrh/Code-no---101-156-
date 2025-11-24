#include <stdio.h>

int main() {
    if (chmod("data.txt", 0444) == 0)
        printf("File is now read-only.");
    else
        printf("Unable to change permission.");

    return 0;
}
