#include <stdio.h>
int main(void) {
    int a, b, remainder;
    printf("Two positive numbers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Invalid numbers!\n");
        return 1;
    }
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("GCD = %d\n", a);
    return 0;
}
