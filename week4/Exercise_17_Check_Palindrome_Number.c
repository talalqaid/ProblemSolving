#include <stdio.h>
int main(void) {
    int number, original, reversed = 0, digit;
    printf("Enter a nonnegative number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Invalid number!\n");
        return 1;
    }
    original = number;
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    if (original == reversed) printf("Palindrome number\n");
    else printf("Not a palindrome number\n");
    return 0;
}
