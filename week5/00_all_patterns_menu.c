/* Menu-driven star triangles: select a pattern and grid size. */
#include <stdio.h>

int main(void) {
    int n, choice;
    printf("STAR PATTERN MENU\n");
    printf(" 1. Full square\n");
    printf(" 2. Main diagonal\n");
    printf(" 3. Secondary diagonal\n");
    printf(" 4. Above/on main diagonal\n");
    printf(" 5. Strictly above main diagonal\n");
    printf(" 6. Below/on main diagonal\n");
    printf(" 7. Strictly below main diagonal\n");
    printf(" 8. Above/on secondary diagonal\n");
    printf(" 9. Strictly above secondary diagonal\n");
    printf("10. Below/on secondary diagonal\n");
    printf("11. Strictly below secondary diagonal\n");
    printf("12. Small top triangle (both diagonals included)\n");
    printf("13. Small right triangle (both diagonals included)\n");
    printf("14. Small bottom triangle (both diagonals included)\n");
    printf("15. Small left triangle (both diagonals included)\n");
    printf("16. Small top triangle (both diagonals excluded)\n");
    printf("17. Small right triangle (both diagonals excluded)\n");
    printf("18. Small bottom triangle (both diagonals excluded)\n");
    printf("19. Small left triangle (both diagonals excluded)\n");
    printf("20. Increasing left-aligned triangle\n");
    printf("21. Decreasing left-aligned triangle\n");
    printf("22. Increasing right-aligned triangle\n");
    printf("23. Decreasing right-aligned triangle\n");
    printf("24. Both diagonals (X)\n");
    printf("Enter choice (1-24): ");
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 24) {
        printf("Invalid choice.\n");
        return 1;
    }
    printf("Enter grid size (1-40): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 40) {
        printf("Invalid size.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int draw = 0;
            switch (choice) {
                case 1: draw = (1); break;
                case 2: draw = (i == j); break;
                case 3: draw = (i + j == n - 1); break;
                case 4: draw = (i <= j); break;
                case 5: draw = (i < j); break;
                case 6: draw = (i >= j); break;
                case 7: draw = (i > j); break;
                case 8: draw = (i + j <= n - 1); break;
                case 9: draw = (i + j < n - 1); break;
                case 10: draw = (i + j >= n - 1); break;
                case 11: draw = (i + j > n - 1); break;
                case 12: draw = (i <= j && i + j <= n - 1); break;
                case 13: draw = (i <= j && i + j >= n - 1); break;
                case 14: draw = (i >= j && i + j >= n - 1); break;
                case 15: draw = (i >= j && i + j <= n - 1); break;
                case 16: draw = (i < j && i + j < n - 1); break;
                case 17: draw = (i < j && i + j > n - 1); break;
                case 18: draw = (i > j && i + j > n - 1); break;
                case 19: draw = (i > j && i + j < n - 1); break;
                case 20: draw = (j <= i); break;
                case 21: draw = (j < n - i); break;
                case 22: draw = (j >= n - 1 - i); break;
                case 23: draw = (j >= i); break;
                case 24: draw = (i == j || i + j == n - 1); break;
                default: break;
            }
            printf(draw ? "* " : "  ");
        }
        printf("\n");
    }
    return 0;
}
