/* Week 2 - Exercise 6: Largest of Three Numbers
   Ask the user to enter three integers. Display the largest number. The program must also work when two or more numbers are equal.
*/

#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("Largest number: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number: %d\n", b);
    } else {
        printf("Largest number: %d\n", c);
    }
    return 0;
}
