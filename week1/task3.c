#include <stdio.h>

int main(void) {
    int length = 12, width = 5;
    int area = length * width;
    int perimeter = 2 * (length + width);
    printf("Length: %d\nWidth: %d\nArea: %d\nPerimeter: %d\n", length, width, area, perimeter);
    return 0;
}
