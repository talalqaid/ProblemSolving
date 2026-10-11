/* Week 2 - Exercise 1: Positive, Negative or Zero
   Ask the user to enter an integer. Display whether the number is positive, negative or zero.
*/

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
