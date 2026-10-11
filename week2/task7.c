/* Week 2 - Exercise 7: Grade Classification
   Ask the user to enter an exam mark (0–100) and display the grade: A (70–100), B (60–69), C (50–59), D (40–49), or F (0–39). Display "Invalid mark" for any value outside the valid range.
*/

#include <stdio.h>

int main(void) {
    int mark;
    printf("Enter exam mark: ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid mark.\n");
    } else if (mark >= 70) {
        printf("Grade: A\n");
    } else if (mark >= 60) {
        printf("Grade: B\n");
    } else if (mark >= 50) {
        printf("Grade: C\n");
    } else if (mark >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}
