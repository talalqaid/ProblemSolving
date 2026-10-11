/* Week 2 - Exercise 8: Leap Year Checker
   Ask the user to enter a year. Display whether it is a leap year. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Assume the year is a positive integer.
*/

#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year.\n");
    } else {
        printf("Not a leap year.\n");
    }
    return 0;
}
