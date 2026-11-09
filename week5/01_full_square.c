/* Full square
   Rows and columns use zero-based indices.
   Change n to choose the grid size.
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter grid size (1-40): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 40) {
        printf("Invalid size.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
