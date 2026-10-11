/* Week 2 - Exercise 4: Pass or Fail
   Ask the user to enter an exam mark from 0 to 100. Display "Pass" for marks of 40 or above and "Fail" otherwise. Display "Invalid mark" for values outside 0–100.
*/

#include <stdio.h>

int main(void) {
    int mark;
    printf("Enter exam mark: ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid mark.\n");
    } else if (mark >= 40) {
        printf("Pass.\n");
    } else {
        printf("Fail.\n");
    }
    return 0;
}
