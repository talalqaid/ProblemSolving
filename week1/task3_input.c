#include <stdio.h>

int main(void) {
    int length, width;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Area: %d\nPerimeter: %d\n", length * width, 2 * (length + width));
    return 0;
}
