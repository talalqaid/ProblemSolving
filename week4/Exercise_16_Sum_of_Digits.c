#include <stdio.h>
int main(void) {
    int number, digit, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
