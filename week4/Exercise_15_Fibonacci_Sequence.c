#include <stdio.h>
int main(void) {
    int terms, first = 0, second = 1, next;
    printf("Number of terms (1-47): ");
    scanf("%d", &terms);
    if (terms < 1 || terms > 47) {
        printf("Invalid number of terms!\n");
        return 1;
    }
    for (int i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
