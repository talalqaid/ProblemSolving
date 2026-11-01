#include <stdio.h>
int main(void) {
    int number, count = 0;
    printf("Enter a nonnegative number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Invalid number!\n");
        return 1;
    }
    if (number == 0) count = 1;
    while (number > 0) {
        number /= 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
