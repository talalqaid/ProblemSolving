#include <stdio.h>
int main(void) {
    int number;
    unsigned long long factorial = 1;
    printf("Number (0-20): ");
    scanf("%d", &number);
    if (number < 0 || number > 20) {
        printf("Invalid number!\n");
        return 1;
    }
    for (int i = 1; i <= number; i++) factorial *= i;
    printf("Factorial = %llu\n", factorial);
    return 0;
}
