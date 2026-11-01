#include <stdio.h>
int main(void) {
    int number, original, digit, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("Invalid number!\n");
        return 1;
    }
    original = number;
    while (number > 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    if (sum == original) printf("Armstrong number\n");
    else printf("Not an Armstrong number\n");
    return 0;
}
