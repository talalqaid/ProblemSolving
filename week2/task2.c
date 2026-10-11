/* Week 2 - Exercise 2: Even or Odd
   Ask the user to enter an integer. Determine whether it is even or odd using the remainder operator (%).
*/

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}
