#include <stdio.h>
#include <stdbool.h>


const char* boolToString(bool value) {
    if (value)
        return "true";
    else
        return "false";
}


int main() {
    bool flag1 = true;
    bool flag2 = false;
  

          printf("flag1 = %s\n", boolToString(flag1));
          printf("flag2 = %s\n", boolToString(flag2));

    return 0;
}
