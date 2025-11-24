#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(250, 250, 100);

    getch();
    closegraph();
    return 0;
}
