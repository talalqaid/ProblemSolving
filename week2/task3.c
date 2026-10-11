/* Week 2 - Exercise 3: Voting Eligibility
   Ask the user to enter their age. Display "Eligible to vote" if the age is 18 or above; otherwise display "Not eligible to vote".
*/

#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible to vote.\n");
    } else {
        printf("Not eligible to vote.\n");
    }
    return 0;
}
