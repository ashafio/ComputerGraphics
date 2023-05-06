#include <iostream>
#include <graphics.h> // This header file is used to draw the line

using namespace std;

void dda_line(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = max(abs(dx), abs(dy));
    float x_inc = dx / (float) steps;
    float y_inc = dy / (float) steps;
    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(x, y, WHITE); // draw a pixel at (x, y)
        x += x_inc;
        y += y_inc;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // draw a line from (10, 10) to (100, 100) using DDA algorithm
    dda_line(10, 10, 100, 100);

    getch();
    closegraph();
    return 0;
}