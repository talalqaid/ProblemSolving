#include <stdio.h>
int main(void) {
    char light;
    printf("Enter traffic light (R/Y/G): ");
    if (scanf(" %c", &light) != 1) return 1;
    switch (light) {
        case 'R': case 'r': printf("Stop\n"); break;
        case 'Y': case 'y': printf("Prepare to stop\n"); break;
        case 'G': case 'g': printf("Go when safe\n"); break;
        default: printf("Invalid light\n");
    }
    return 0;
}
