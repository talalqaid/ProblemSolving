#include <stdio.h>
int main(void) {
    int mark, passed = 0, total = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Enter mark for student %d: ", i);
        scanf("%d", &mark);
        total += mark;
        if (mark >= 40) passed++;
    }
    printf("Average mark: %.2f\n", total / 5.0);
    printf("Students passed: %d\n", passed);
    return 0;
}
