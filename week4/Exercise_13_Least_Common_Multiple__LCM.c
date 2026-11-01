#include <stdio.h>
int main(void) {
    int a, b, lcm;
    printf("Two positive numbers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Invalid numbers!\n");
        return 1;
    }
    lcm = (a > b) ? a : b;
    while (lcm % a != 0 || lcm % b != 0) lcm++;
    printf("LCM = %d\n", lcm);
    return 0;
}
