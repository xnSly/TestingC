#include <stdio.h>

int calculateRectangleArea(int width, int height) {
    return width * height;
}

int main() {
    printf("%d", calculateRectangleArea(10, 5));

    return 0;
}