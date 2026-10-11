/* Week 2 - Exercise 5: Larger of Two Numbers
   Ask the user to enter two integers. Display the larger number, or state that they are equal.
*/

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b) {
        printf("Larger number: %d\n", a);
    } else if (b > a) {
        printf("Larger number: %d\n", b);
    } else {
        printf("The numbers are equal.\n");
    }
    return 0;
}
