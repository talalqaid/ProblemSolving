#include <stdio.h>
int main(void) {
    int number, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 1) isPrime = 0;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) printf("Prime number\n");
    else printf("Not a prime number\n");
    return 0;
}
