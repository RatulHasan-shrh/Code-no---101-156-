#include <stdio.h>

struct Emp {
    int id;
    char name[50];
};

int main() {
             struct Emp e1 = {1, "Alex"}, e2;
             FILE *fp = fopen("emp.bin", "wb");

   fwrite(&e1, sizeof(e1), 1, fp);
   fclose(fp);

            fp = fopen("emp.bin", "rb");
            fread(&e2, sizeof(e2), 1, fp);
            fclose(fp);

    printf("%d %s", e2.id, e2.name);
    return 0;
}
